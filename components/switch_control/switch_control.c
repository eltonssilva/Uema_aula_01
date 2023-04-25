#include <stdio.h>


#include "switch_control.h"

#define     BUTTON_1     0

void vTask_switch(void *pvParameters)
{


    init_gpio_switch(  );
    bool  status_switch_1, old_status_switch_1;

    status_switch_1 =  gpio_get_level(BUTTON_1);
    old_status_switch_1 = status_switch_1;


    while(true){

    status_switch_1 =  gpio_get_level(BUTTON_1);

    if (status_switch_1 != old_status_switch_1){
            printf ("Valor Switch %d\n", status_switch_1);
            old_status_switch_1 = status_switch_1;
    }
    



    vTaskDelay( 200 / portTICK_PERIOD_MS );


    }
}


void init_gpio_switch( void ){

    gpio_pad_select_gpio( BUTTON_1 ); 
    gpio_set_direction( BUTTON_1, GPIO_MODE_INPUT );

    
}