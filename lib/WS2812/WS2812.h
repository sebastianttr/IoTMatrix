#ifndef WS2812_H
#define WS2812_H

#include <stdint.h>

class WS2812
{

private:
    const char *_TAG = "WS2812.cpp";
    void (*_callBackfunction)(uint8_t);
    

public:
    WS2812();
    uint8_t init();
    void showColor(uint32_t hexColor);
    void setPeripherialWriteFunction(void (*callbackFunction)(uint8_t));

};

#endif