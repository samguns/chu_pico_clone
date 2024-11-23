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

// #define NKRO_KEYMAP "1aqz2swx3dec4frv5gtb6hyn7jum8ki90ABCDE"
// #define NKRO_KEYMAP "6789ABCDEFGHIJKLMNOPQRSTUVWXYZ\x20\x7f012345"
#define NKRO_KEYMAP { \
  0x36, \
  0x37, \
  0x38, \
  0x39, \
  0x41, \
  0x42, \
  0x43, \
  0x44, \
  0x45, \
  0x46, \
  0x47, \
  0x48, \
  0x49, \
  0x4a, \
  0x4b, \
  0x4c, \
  0x4d, \
  0x4e, \
  0x4f, \
  0x50, \
  0x51, \
  0x52, \
  0x53, \
  0x54, \
  0x55, \
  0x56, \
  0x57, \
  0x58, \
  0x59, \
  0x5a, \
  0x08, \
  0x09, \
  0x30, \
  0x31, \
  0x32, \
  0x33, \
  0x34, \
  0x35 \
 }
#else

#endif
