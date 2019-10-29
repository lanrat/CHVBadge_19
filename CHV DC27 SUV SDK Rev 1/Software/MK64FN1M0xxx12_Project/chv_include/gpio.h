/******************************************************************************
 * @file
 *
 * Copyright 2019, Specialized Solutions LLC

 * @brief GPIO Driver declarations
 *
 *****************************************************************************/

#ifndef GPIO_H
#define GPIO_H

/******************************************************************************
 * Includes
 *****************************************************************************/
#include "datatypes.h"
#include <stdio.h>

/******************************************************************************
 * Macros and Constants
 *****************************************************************************/

/******************************************************************************
 * Typedefs
 *****************************************************************************/


/******************************************************************************
 * Functions
 *****************************************************************************/
void gpio_init(void);

BOOL gpio_switch_get(void);

#endif


