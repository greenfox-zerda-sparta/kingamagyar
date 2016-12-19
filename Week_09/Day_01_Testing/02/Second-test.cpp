#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Second.hpp"

TEST_CASE("Second sumNumbers with multiple elements in vector") {
  Second second;
  std::vector<int> vec = {1, 2, 3, 4, 5, 6};
  REQUIRE(second.sumNumbers(vec) == 21);
}

TEST_CASE("Second sumNumbers with empty vector") {
  Second second;
  std::vector<int> vec;
  REQUIRE(second.sumNumbers(vec) == 0);
}

TEST_CASE("Second sumNumbers with one element in vector") {
  Second second;
  std::vector<int> vec = {8};
  REQUIRE(second.sumNumbers(vec) == 8);
}
