#include <stdio.h>
#include "../definition.h"
#include "blink.h"
#include "switch_control.h"




void app_main(void)
{

    xTaskCreate( vTask_blink, "Task_blink", configMINIMAL_STACK_SIZE + 1024, NULL, 1, NULL);
    xTaskCreatePinnedToCore( vTask_switch, "Task_switch", configMINIMAL_STACK_SIZE + 1024, NULL, 4, NULL, 0 );


}

