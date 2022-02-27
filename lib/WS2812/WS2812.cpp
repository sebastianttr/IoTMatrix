#include "WS2812.h"
#include "esp_log.h"
#include "str.h"
#include "stdio.h"

WS2812::WS2812()
{
}

void WS2812::setPeripherialWriteFunction(void (*callbackFunction)(uint8_t))
{
    this->_callBackfunction = callbackFunction;
}

uint8_t WS2812::init()
{
    ESP_LOGI(this->_TAG, "WS2812 init\r");
    return 0;
}

void WS2812::showColor(uint32_t hexColor)
{
    uint8_t red = (hexColor >> 16);
    uint8_t blue = (hexColor >> 8);
    uint8_t green = hexColor;

    this->_callBackfunction(red);

    // ESP_LOGI(this->_TAG, "Red: %d  |  Green: %d  |  Blue: %d\r", red, blue, green);
}
