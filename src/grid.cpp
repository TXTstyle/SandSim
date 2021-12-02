#pragma once
namespace ult{
    inline int getPosGridX(unsigned int in) {
    unsigned short int x = 128;

    int modX = in % x;
    return modX;
    }
    inline int getPosGridY(unsigned int in) {
        unsigned short int x = 128;

        int modX = in % x;
        int mod2 = (in-modX)/x;
        return mod2;
    }
}


