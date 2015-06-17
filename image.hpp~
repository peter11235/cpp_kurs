#ifndef BILD_HPP
#define BILD_HPP

template <class T>
class Image
{
    public:
        typedef T value_type;//wahrscheinlich uint8_t
        Image(unsigned int width, unsigned int height)
        : width_(width), height_(height), data_(width*height,0)
        {
        
        }
        
        int width() const
        {
            return width_;
        }   
        int height() const
        {
            return height_;
        }
        int size() const
        {
            return width_*height_;
        }
        
    private:
        int width_, height_;
        vector<value_type> data_;
};

#endif
