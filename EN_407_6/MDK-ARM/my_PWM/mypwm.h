#ifndef __MYTPWM_H
#define __MYTPWM_H
#include "mypwm.h"
/* USER CODE BEGIN 0 */
#include "stm32f4xx_hal.h"
#include "tim.h"

//̧���о�,����ӳ���һ���ж�����
#define left_up 2     //������Χ0-40��  �н�����Ϊ13��   ��ʼΪ0
#define right_up 1    //�����ҷ�Χ180-140��  �н�����Ϊ167��  ��ʼΪ180��
#define up_down 4
#define Lifting_Clamp htim4
#define Opening_Closing htim5

//ץȡ�о�,����ӳ���һ���ж�����
#define left_get 1 
#define right_get 3
#define center_get 2
#define Move_Thing_Clamp htim4


	
void Servomotor_Init(void);
void Set_SG90_angle(TIM_HandleTypeDef * htim,uint32_t Channel,uint8_t angle,uint32_t countPeriod,uint32_t CycleTime);


#endif
