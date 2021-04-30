/**
 * @file Seatheater.c
 * @author Rahul Jha (ganeshshenoy999@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define F_CPU 1600000UL

#include <avr/io.h>
#include <util/delay.h>
#include "../inc/Activity1.h"
#include "../inc/Activity2.h"
/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 */
int main()
{
    // Calling the system_init function which determines the status of LED actuator
    activity1();
    activity2();
    return 0;
}