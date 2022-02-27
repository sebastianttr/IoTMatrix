#include "app/app.h"

extern "C" {
    void app_main(void);
}

void app_main() {
    init();

    for(;;){
        loop();
    }
}