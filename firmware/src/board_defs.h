/*
 * Chu Controller Board Definitions
 * WHowe <github.com/whowechina>
 */

#if defined BOARD_CHU_PICO

#define I2C_PORT i2c0
#define I2C_SDA 16
#define I2C_SCL 17
#define I2C_FREQ 620*1000

#define I2C_HUB_EN 19

#define TOF_MUX_LIST { 0, 4, 5, 6, 7 }

#define IR_GROUP_ABC_GPIO { 3, 4, 5 }
#define IR_SIG_ADC_CHANNEL { 0, 1 }

#define RGB_MAIN_PIN 2
#define RGB_TOWER_LEFT_PIN 0
#define RGB_TOWER_RIGHT_PIN 1
#define RGB_ORDER GRB // or RGB

#define NKRO_KEYMAP "1aqz2swx3dec4frv5gtb6hyn7jum8ki90ABCDE"
#else

#endif
