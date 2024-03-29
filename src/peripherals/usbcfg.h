/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at
        http://www.apache.org/licenses/LICENSE-2.0
    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#pragma once
#include "hal.h"

/**
 * @brief  serial-over-USB CDC driver
 */
extern SerialUSBDriver SDU1;

#ifdef __cplusplus
extern "C"
{
#endif
    /**
 * @brief Initializes USBD1 and serial-over-USB CDC driver SDU1
 */
    void setup_USB(void);

#ifdef __cplusplus
}
#endif
