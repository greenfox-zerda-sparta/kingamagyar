#include "Color.hpp"

Color::Color() : red(0), green(0), blue(0) {
}

Color::Color(unsigned char r, unsigned char g, unsigned char b) {
  red = r;
  green = g;
  blue = b;
}

Color::Color(std::string hex) {
  //if ( letter == 97 || letter == 65 )
}

Color::Color(const Color& other) {
  red = other.red;
  green = other.green;
  blue = other.blue;
}

unsigned char Color::get_red() const {
  return red;
}

unsigned char Color::get_green() const {
  return green;
}

unsigned char Color::get_blue() const {
  return blue;
}

std::string Color::get_rgb() {
  return "RGB(" + to_string((int)red) + ", " + to_string((int)green) + ", " + to_string((int)blue) + ")";
}

void Color::set_red(unsigned char r) {
  red = r;
}

void Color::set_green(unsigned char g) {
  green = g;
}

void Color::set_blue(unsigned char b) {
  blue = b;
}

Color Color::blend(const Color& other) {
  Color temp;
  temp.red = (red + other.red) / 2;
  temp.green = (green + other.green) / 2;
  temp.blue = (blue + other.blue) / 2;
  return temp;
}

void Color::darken(float amount) {
  if (amount < 0 || amount > 1) {
    throw "Wrong amount, it needs to be between 0 and 1!";
  }
}

void Color::lighten(float amount) {
  if (amount < 0 || amount > 1) {
    throw "Wrong amount, it needs to be between 0 and 1!";
  }
}
