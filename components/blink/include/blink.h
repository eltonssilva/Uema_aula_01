#ifndef __BLINK__H__
#define __BLINK__H__


#include "driver/gpio.h"
#include "../../definition.h"


void vTask_blink(void *pvParameters);
void init_gpio( void );


#endif  //!__BLINK__H__
