/******************************************************************************
 * @file
 *
 * Copyright 2019, Specialized Solutions LLC

 * @brief ADC Driver declarations
 *
 *****************************************************************************/

#ifndef ADC_H
#define ADC_H

/******************************************************************************
 * Includes
 *****************************************************************************/
#include "datatypes.h"
#include <stdio.h>
#include "fsl_common.h"

/******************************************************************************
 * Macros and Constants
 *****************************************************************************/

/******************************************************************************
 * Typedefs
 *****************************************************************************/

/******************************************************************************
 * Functions
 *****************************************************************************/
void adc_init(void);
uint16_t adc_get_value(void);

#endif


