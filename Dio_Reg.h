/*
 * Module: Dio
 *
 * File Name: Dio.h
 *
 *  * Description: Header file for TM4C123GH6PM Microcontroller - Dio Driver
 *
 * Author: Youssef
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_

#include "Std_Types.h"

/* DATA REGISTERS OF THE PORT */
#define GPIO_PORTA_DATA_REG       (*((volatile uint32 *)0x400043FC))
#define GPIO_PORTB_DATA_REG       (*((volatile uint32 *)0x400053FC))
#define GPIO_PORTC_DATA_REG       (*((volatile uint32 *)0x400063FC))
#define GPIO_PORTD_DATA_REG       (*((volatile uint32 *)0x400073FC))
#define GPIO_PORTE_DATA_REG       (*((volatile uint32 *)0x400243FC))
#define GPIO_PORTF_DATA_REG       (*((volatile uint32 *)0x400253FC))

#endif /* DIO_REG_H_ */
