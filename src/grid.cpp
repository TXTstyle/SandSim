#pragma once
#include "Grid.hpp"

namespace ult{
    inline int getPosGridX(unsigned int in) {
    const unsigned short int x = 128;

    int modX = in % x;
    return modX;
    }
    inline int getPosGridY(unsigned int in) {
        const unsigned short int x = 128;

        int modX = in % x;
        int mod2 = (in-modX)/x;
        return mod2;
    }

    inline bool isGridDown(unsigned int in, unsigned short int g[]) {
        if(g[in+128] == 0) {
            return true;
        }else{return false;}
    }

    inline bool isGridLeft(unsigned int in, unsigned short int g[]) {
        if(g[in+127] == 0 && (getPosGridY(in) > 74)) {
            return true;
        }else{return false;}
    }

}


