#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "binarysearch.h"

TEST_CASE("Searched number is exactly in the middle of an even sized vector") {
  std::vector<int> array = {1, 2, 8, 12, 24, 56, 77, 82, 88, 92};
  int number_to_find = 24;
  REQUIRE(is_number_found(array, number_to_find) == true);
}

TEST_CASE("Searched number is exactly in the middle of an odd sized vector") {
  std::vector<int> array = {1, 2, 8, 12, 24, 56, 77, 82, 88, 92, 104};
  int number_to_find = 24;
  REQUIRE(is_number_found(array, number_to_find) == true);
}

TEST_CASE("Searched number is in the bottom half of odd sized vector") {
  std::vector<int> array = {1, 2, 8, 12, 24, 56, 77, 82, 88, 92, 104};
  int number_to_find = 2;
  REQUIRE(is_number_found(array, number_to_find) == true);
}

TEST_CASE("Searched number is in the bottom half of an even sized vector") {
  std::vector<int> array = {1, 2, 8, 12, 24, 56, 77, 82, 88, 92};
  int number_to_find = 8;
  REQUIRE(is_number_found(array, number_to_find) == true);
}


TEST_CASE("Searched number is in the top half of odd sized vector") {
  std::vector<int> array = {1, 2, 8, 12, 24, 56, 77, 82, 88, 92, 104};
  int number_to_find = 88;
  REQUIRE(is_number_found(array, number_to_find) == true);
}

TEST_CASE("Searched number is in the top half of even sized vector") {
  std::vector<int> array = {1, 2, 8, 12, 24, 56, 77, 82, 88, 92};
  int number_to_find = 88;
  REQUIRE(is_number_found(array, number_to_find) == true);
}

TEST_CASE("Searched number is not in the odd sized vector") {
  std::vector<int> array = {1, 2, 8, 12, 24, 56, 77, 82, 88, 92, 104};
  int number_to_find = 3;
  REQUIRE(is_number_found(array, number_to_find) == false);
}
