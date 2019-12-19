/* mbed Example Program
 * Copyright (c) 2006-2014 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mbed.h"

// Blinking rate in milliseconds
#define BLINKING_RATE_MS                                                    500

// define the Serial object
Serial pc(USBTX, USBRX);

int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);
    
    while (true) {
        led = !led;
        pc.printf("Blink! LED1 is now %d\r\n", led.read());
        thread_sleep_for(BLINKING_RATE_MS);
    }
}