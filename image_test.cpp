#include <iostream>
#include <cmath>
#include "image.hpp"


int main()
{
    int w = 100, h = 100;
    Image<uint8_t> img(w,h);
    for (int y = 0; y < h; ++y)
    {
        for (int x = 0; x < w; ++x)
        {
            img(x,y) = ((x+y) % 2)*255;
        }
    }
    write_pgm(img, "sample_pic.pgm");
}
