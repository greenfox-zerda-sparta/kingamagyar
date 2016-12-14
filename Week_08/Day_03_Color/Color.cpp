#include "Color.hpp"

Color::Color() {
  red = '0';
  green = '0';
  blue = '0';
}

Color::Color(unsigned char r, unsigned char g, unsigned char b) {
  red = r;
  green = g;
  blue = b;
}

Color::Color(std::string hex) {
  
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
