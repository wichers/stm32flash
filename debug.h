#pragma once

//#define DEBUG_SUPPORT           1

#if DEBUG_SUPPORT
#include "esphome/core/log.h"
    #define DEBUG_MSG(tag, ...) esphome::ESP_LOGD(tag, __VA_ARGS__)
#endif

#ifndef DEBUG_MSG
    #define DEBUG_MSG(tag, ...)
#endif
