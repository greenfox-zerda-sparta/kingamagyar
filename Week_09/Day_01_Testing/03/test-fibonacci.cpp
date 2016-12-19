#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Fibonacci.hpp"

TEST_CASE("Fibonacci return_fibonacci_number with index 0") {
  Fibonacci fibo;
  REQUIRE(fibo.return_fibonacci_number(0) == 0);
}

TEST_CASE("Fibonacci return_fibonacci_number with index 1") {
  Fibonacci fibo;
  REQUIRE(fibo.return_fibonacci_number(1) == 1);
}

TEST_CASE("Fibonacci return_fibonacci_number with negative index") {
  Fibonacci fibo;
  REQUIRE_THROWS(fibo.return_fibonacci_number(-2));
}
