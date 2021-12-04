namespace ult{
    inline int getPosGridX(int in) {
        const unsigned short int x = 127;

        int modX = in % x;
        return modX;
    }
    inline int getPosGridY(int in) {
        const unsigned short int x = 127;
        const unsigned short int y = 74;

        int modX = in % x;
        int mod2 = (in-modX)/y;
        return mod2-1;
    }
    inline int getGridPos(int x, int y) {
        const int gridWidth = 127;
        return gridWidth*(y-1) + x;
    }
}