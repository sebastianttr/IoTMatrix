#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "WS2812.h"

// do not forget cariage return "\r"
const char _TAG[] = "app.cpp";

WS2812 rgbLED = WS2812();

// callback fucntion for the wS2812 bit banging.
void gpioWrite(uint8_t state)
{
    ESP_LOGI(_TAG, "writing state: %d\r", state);
}

void init()
{
    ESP_LOGI(_TAG, "Initialising system. Performing Running system test.\r");
    rgbLED.init();
    rgbLED.setPeripherialWriteFunction(gpioWrite);
}

void loop()
{
    rgbLED.showColor(0x3A32A8);
    vTaskDelay(2000 / portTICK_PERIOD_MS);
}