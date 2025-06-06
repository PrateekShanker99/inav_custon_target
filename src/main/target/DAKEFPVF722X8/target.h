/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "DAK7"
#define USBD_PRODUCT_STRING  "DAKEFPV F722X8"

#define LED0                    PA15

#define BEEPER                  PC3
#define BEEPER_INVERTED

// Buses
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN	        PA6
#define SPI1_MOSI_PIN	        PA7

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN	        PB14
#define SPI2_MOSI_PIN	        PB15

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN	        PB4
#define SPI3_MOSI_PIN	        PB5

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

#define DEFAULT_I2C_BUS         BUS_I2C1

// GYRO
#define USE_IMU_MPU6500
#define IMU_MPU6500_ALIGN       CW90_DEG
#define MPU6500_CS_PIN          PA4
#define MPU6500_EXTI_PIN        PC4
#define MPU6500_SPI_BUS         BUS_SPI1

#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW90_DEG
#define MPU6000_CS_PIN          PA4
#define MPU6000_EXTI_PIN        PC4
#define MPU6000_SPI_BUS         BUS_SPI1

#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN      CW90_DEG
#define ICM42605_SPI_BUS        BUS_SPI1
#define ICM42605_CS_PIN         PA4
#define ICM42605_EXTI_PIN       PC4

#define USE_IMU_BMI270
#define IMU_BMI270_ALIGN        CW90_DEG
#define BMI270_SPI_BUS          BUS_SPI1
#define BMI270_CS_PIN           PA4
#define BMI270_EXTI_PIN         PC4

#define USE_IMU_ICM42688P
#define IMU_ICM42688P_ALIGN     CW90_DEG
#define ICM42688P_CS_PIN        PA4
#define ICM42688P_EXTI_PIN      PC4
#define ICM42688P_SPI_BUS       BUS_SPI1

// M25P256 flash
#define USE_FLASHFS
#define USE_FLASH_M25P16

#define M25P16_SPI_BUS          BUS_SPI3
#define M25P16_CS_PIN           PB2

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PB12

// CAMERA_CONTROL
#define CAMERA_CONTROL_PIN      PB0

// Serial ports
#define USE_VCP

#define USE_UART1
#define UART1_RX_PIN            PB6
#define UART1_TX_PIN            PB7

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PD8

#define USE_UART4
#define UART4_RX_PIN            PC11
#define UART4_TX_PIN            PC10

#define USE_UART5
#define UART5_RX_PIN            PD2
#define UART5_TX_PIN            PC12

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define SERIAL_PORT_COUNT       6

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART5
#define GPS_UART                SERIAL_PORT_USART1

//Baro 
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define BARO_I2C_BUS            DEFAULT_I2C_BUS

// Mag
#define USE_MAG
#define MAG_I2C_BUS             DEFAULT_I2C_BUS
#define USE_MAG_ALL

#define TEMPERATURE_I2C_BUS     DEFAULT_I2C_BUS

#define USE_RANGEFINDER
#define USE_RANGEFINDER_MSP
#define RANGEFINDER_I2C_BUS     DEFAULT_I2C_BUS

// unkonw
#define PITOT_I2C_BUS           DEFAULT_I2C_BUS

// ADC
#define USE_ADC
#define ADC_CHANNEL_1_PIN           PC1
#define ADC_CHANNEL_2_PIN           PC2
#define ADC_CHANNEL_3_PIN           PC0
#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define RSSI_ADC_CHANNEL            ADC_CHN_2
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_3
#define ADC1_DMA_STREAM             DMA2_Stream3
#define VBAT_SCALE_DEFAULT          1600

#define DEFAULT_FEATURES        (FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY | FEATURE_LED_STRIP | FEATURE_GPS)

#define USE_LED_STRIP
#define WS2811_PIN                  PA0

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff

#define USE_DSHOT
#define USE_ESC_SENSOR

#define MAX_PWM_OUTPUT_PORTS    8

// PINIO
#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PB1  // 9Vsw
#define PINIO2_PIN                  PB10  // Camera switcher