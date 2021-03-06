/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */
#include <stdbool.h>
#include <stdint.h>
/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define ANODE2_Pin GPIO_PIN_0
#define ANODE2_GPIO_Port GPIOA
#define TRIAC_Pin GPIO_PIN_1
#define TRIAC_GPIO_Port GPIOA
#define SW5_Pin GPIO_PIN_3
#define SW5_GPIO_Port GPIOA
#define ADC_NTC_Pin GPIO_PIN_4
#define ADC_NTC_GPIO_Port GPIOA
#define SW4_Pin GPIO_PIN_5
#define SW4_GPIO_Port GPIOA
#define SW3_Pin GPIO_PIN_6
#define SW3_GPIO_Port GPIOA
#define SW2_Pin GPIO_PIN_7
#define SW2_GPIO_Port GPIOA
#define SEGM_G_Pin GPIO_PIN_0
#define SEGM_G_GPIO_Port GPIOB
#define SEGM_F_Pin GPIO_PIN_1
#define SEGM_F_GPIO_Port GPIOB
#define SW1_Pin GPIO_PIN_8
#define SW1_GPIO_Port GPIOA
#define ANODE1_Pin GPIO_PIN_11
#define ANODE1_GPIO_Port GPIOA
#define LED_3_Pin GPIO_PIN_12
#define LED_3_GPIO_Port GPIOA
#define LED_1_2_Pin GPIO_PIN_15
#define LED_1_2_GPIO_Port GPIOA
#define SEGM_E_Pin GPIO_PIN_3
#define SEGM_E_GPIO_Port GPIOB
#define SEGM_D_Pin GPIO_PIN_4
#define SEGM_D_GPIO_Port GPIOB
#define SEGM_C_Pin GPIO_PIN_5
#define SEGM_C_GPIO_Port GPIOB
#define SEGM_B_Pin GPIO_PIN_6
#define SEGM_B_GPIO_Port GPIOB
#define SEGM_A_Pin GPIO_PIN_7
#define SEGM_A_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
