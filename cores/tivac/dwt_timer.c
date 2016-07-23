/*
 * dwt_timer.c
 *
 *  Created on: Jun 15, 2015
 *      Author: kimballr
 */
#include "Arduino.h"
#include "dwt_timer.h"

void dwt_init() {
    if (!(CoreDebug->DEMCR & CoreDebug_DEMCR_TRCENA_Msk)) {
        CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
        DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;
    }
    CYCCNT_ = 0;
}
