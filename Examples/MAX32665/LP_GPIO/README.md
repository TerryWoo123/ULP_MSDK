# LP_GPIO

Enter deep sleep with a GPIO wakeup. 

## Required Connections

- Connect a USB cable between the PC and the CN2 (USB/PWR) connector.
- Open an terminal application on the PC and connect to the EV kit's console UART at 115200, 8-N-1.
- Setup a signal generator on PB0(P1.6), 6 Hz, square wave, 1.6 VPP, 0.8V offset. This will wakeup the MAX32665 every 80 ms. 

## Expected Output

The Console UART of the device will output these messages:

MCR->ctrl should be 0xb after a POR, 0xf in subsequent events. Bit 2 is automatically
set by the hardware.

```
****Low Power Mode GPIO Example****                                             
                                                                                
MCR->ctrl = 0xb
```

## Questions

### **What is the minimum operating voltages in active and sleep?**
We're currently using 1.0V in active and 0.81V in sleep mode.

### **What is the effect of changing the operating voltage in sleep mode?**


### **Why does the SIMO stop regulating coming into our out of deep sleep?**
This screenshot shows an unregulated period (~500 us) when entering deep sleep. The USB Switch is enabled, causing extra current consumption in deep sleep. Eventually the voltage levels out at a level below the set point.

With the USB Switch enabled, there is excess load on VCOREA in deep sleep. We can see that the voltage dips well below the set point while the SIMO is sleeping, resulting in a large spike when the SIMO wakes up.

It is believed that the SIMO is stuck in soft start while we're in deep sleep. We come out of deep sleep and detect the soft start state, switch the core supply to VCOREB, reducing the load on VCOREA, allowing the SIMO to recharge VCOREA. 
<p align="center">
  <img width="400" src="./pics/USB_Switch_Enabled.PNG">
</p>

With the USB Switch disabled, we reduce the load on VCOREA, preventing the soft start state on VCOREA.

<p align="center">
  <img width="400" src="./pics/USB_Switch_Disabled.PNG">
</p>

* Channel 1(Yellow) is VCORE_A(VREGO_C)
* Channel 2(Blue) is VCORE_B(VREGO_B)
* Channel 4(Green) is indicate active mode when low and sleep mode when high.