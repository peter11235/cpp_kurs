#ifndef BILD_HPP
#define BILD_HPP
#include <vector>
#include <fstream>
#include <stdint.h>
#include "point.hpp"

template <class T>
class Image
{
    public:
        typedef T value_type;//wahrscheinlich uint8_t
        typedef Point<int> Index;
        Image(int width=0, int height=0)
        : width_(width), height_(height), data_(width*height,0)
        {
            if (width < 0 || height < 0) 
            {
                throw std::domain_error("Image(): No negative width or height");
            }
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
        void resize(int width, int height)
        {
            if (width < 0 || height < 0) 
            {
                throw std::domain_error("Image::resize(): No negative width or height");
            }
            width_ = width;
            height_ = height;
            data_.resize(width*height);
        }
        
        value_type & operator[](Index const & p)
        {
            if (p.x() < 0|| p.x() > width_ || p.y() < 0 || p.y() > height_)
                throw std::range_error("x or y out of range");
            return data_[p.x() + width_*p.y()];
        }
        
        value_type const & operator[](Index const & p) const
        {
            if (p.x() < 0|| p.x() > width_ || p.y() < 0 || p.y() > height_)
                throw std::range_error("x or y out of range");
            return data_[p.x() + width_*p.y()];
        }
        
        value_type & operator()(int x, int y)
        {
            if (x < 0|| x > width_ || y < 0 || y > height_)
                throw std::range_error("x or y out of range");
            return data_[x + width_*y];
        }
        value_type const & operator()(int x, int y)const 
        {
            if (x < 0|| x > width_ || y < 0 || y > height_)
                throw std::range_error("x or y out of range");
            return data_[x + width_*y];
        }
        
        value_type & at(int x, int y)
        {
            if (x < 0|| x > width_ || y < 0 || y > height_)
                throw std::range_error("x or y out of range");
            return data_[x + width_*y];
        }
        value_type const & at(int x, int y) const
        {
            if (x < 0|| x > width_ || y < 0 || y > height_)
                throw std::range_error("x or y out of range");
            return data_[x + width_*y];
        }
        value_type & at(Index const & p)
        {
            if (p.x() < 0|| p.x() > width_ || p.y() < 0 || p.y() > height_)
                throw std::range_error("x or y out of range");
            return data_[p.x() + width_*p.y()];
        }
        value_type const & at(Index const & p) const
        {
            if (p.x() < 0|| p.x() > width_ || p.y() < 0 || p.y() > height_)
                throw std::range_error("x or y out of range");
            return data_[p.x() + width_*p.y()];
        }
    private:
        int width_, height_;
        std::vector<value_type> data_;
};

template <class T>
std::string to_string(Image<T> const & img)
{
    std::string s;
    for (int y = 0; y < img.height(); ++y)
    {
        for (int x = 0; x < img.width(); ++x)
        {
            int pixel = img(x,y);
            s += to_string(pixel);
            s += " ";
        }
        s+= "\n";
    }
    return s;
}

void write_pgm(Image<uint8_t> const & image, std::string filename)
{
    std::ofstream file(filename);
         // under Windows: 
        // std::ofstream file(filename, std::ios::binary);
    file << "P2\n";
    file << "# a picture\n";
    file << image.width() << " " << image.height() << "\n";
    file << "255\n";
    file << to_string(image);
    file.close();
}

#endif
