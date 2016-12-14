#ifndef Color_hpp
#define Color_hpp

#include "Util.hpp"
#include <iostream>
#include <string>

class Color {
private:
  unsigned char red;
  unsigned char green;
  unsigned char blue;
public:
  Color();
  Color(unsigned char r, unsigned char g, unsigned char b);
  Color(std::string hex);
  Color(const Color& other);
  unsigned char get_red() const;
  unsigned char get_green() const;
  unsigned char get_blue() const;
  std::string get_rgb();
  void set_red(unsigned char r);
  void set_green(unsigned char g);
  void set_blue(unsigned char b);
  Color blend(const Color& other);
  void darken(float amount);
  void lighten(float amount);
};

#endif /* Color_hpp */
