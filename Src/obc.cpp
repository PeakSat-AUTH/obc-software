#include <Logger.hpp>
#include "obc.h"
#import "stm32l4xx.h"
#import "main.h"

/**
 * @file
 * The main application code of this project. This file is used in conjunction with main.c, allowing us to use C++
 * instead of the C generated by STM32CubeMX
 */

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"

extern "C" void main_cpp() {
    LOG_INFO << "Welcome to the programme";

    while (true) {
        // Add code here...

        HAL_Delay(100);
        HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
        LOG_TRACE << "Heartbeat";
    }
}

#pragma clang diagnostic pop