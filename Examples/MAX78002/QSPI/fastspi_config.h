#include "spi.h"
#include "gpio.h"

// TODO: Config struct
#define SPI MXC_SPI0
#define SPI_SPEED 24000000
#define SPI_PINS_PORT MXC_GPIO0
#define SPI_PINS_MASK (MXC_GPIO_PIN_5 | MXC_GPIO_PIN_4 | MXC_GPIO_PIN_6 | MXC_GPIO_PIN_7 | MXC_GPIO_PIN_8 | MXC_GPIO_PIN_9)