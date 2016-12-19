#define CATCH_CONFIG_MAIN
#include "Catch.hpp"
#include "Apples.hpp"

TEST_CASE("Apples getApple") {
  Apples apples;
  REQUIRE(apples.getApple() == "apple");
}
