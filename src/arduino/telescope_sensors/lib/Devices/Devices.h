#ifndef DEVICES_H
#define DEVICES_H

#include "Config.h"
#include "LCDControl.h"

class Devices {
    private:
        Config &_config;
    public:
        Devices(Config &config);
        LCDControl lcd;
    
        
};

#endif //DEVICES_H