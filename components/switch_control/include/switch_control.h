#ifndef __SWITCH_CONTROL__H__
#define __SWITCH_CONTROL__H__

#include "../../definition.h"
#include <stdbool.h>
#include "driver/gpio.h"

void vTask_switch(void *pvParameters);
void init_gpio_switch( void );

#endif  //!__SWITCH_CONTROL__H__