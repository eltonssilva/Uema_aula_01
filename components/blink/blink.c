#include <stdio.h>
#include "blink.h"

#define     LED     2

void vTask_blink(void *pvParameters)
{


    init_gpio(  );

    while(true){

       
        gpio_set_level( LED,  !gpio_get_level(LED));
        vTaskDelay( 250 / portTICK_PERIOD_MS );
    }
}


void init_gpio( void ){

    gpio_pad_select_gpio( LED ); 
    gpio_set_direction( LED, GPIO_MODE_INPUT_OUTPUT );

    
}