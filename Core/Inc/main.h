/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define left_Pin GPIO_PIN_15
#define left_GPIO_Port GPIOC
#define PWM1_Pin GPIO_PIN_0
#define PWM1_GPIO_Port GPIOA
#define PWM2_Pin GPIO_PIN_1
#define PWM2_GPIO_Port GPIOA
#define direction_Pin GPIO_PIN_4
#define direction_GPIO_Port GPIOA
#define in3_Pin GPIO_PIN_5
#define in3_GPIO_Port GPIOA
#define in4_Pin GPIO_PIN_6
#define in4_GPIO_Port GPIOA
#define speed_up_Pin GPIO_PIN_0
#define speed_up_GPIO_Port GPIOB
#define speed_down_Pin GPIO_PIN_10
#define speed_down_GPIO_Port GPIOB
#define temperature_Pin GPIO_PIN_14
#define temperature_GPIO_Port GPIOB
#define Trig_Pin GPIO_PIN_9
#define Trig_GPIO_Port GPIOA
#define ECHO_Pin GPIO_PIN_10
#define ECHO_GPIO_Port GPIOA
#define in1_Pin GPIO_PIN_11
#define in1_GPIO_Port GPIOA
#define in2_Pin GPIO_PIN_12
#define in2_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
