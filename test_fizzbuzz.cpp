#define CATCH_CONFIG_MAIN  
#include <catch2/catch_all.hpp> 
#include <string>


std::string fizzbuzz(int n) {
    if (n % 3 == 0 && n % 5 == 0) {
        return "FizzBuzz";
    } else if (n % 3 == 0) {
        return "Fizz";
    } else if (n % 5 == 0) {
        return "Buzz";
    } else {
        return std::to_string(n);
    }
}


TEST_CASE("FizzBuzz function works correctly", "[fizzbuzz]") {
    SECTION("Returns FizzBuzz for multiples of 3 and 5") {
        REQUIRE(fizzbuzz(15) == "FizzBuzz");
        REQUIRE(fizzbuzz(30) == "FizzBuzz");
    }

    SECTION("Returns Fizz for multiples of 3 only") {
        REQUIRE(fizzbuzz(3) == "Fizz");
        REQUIRE(fizzbuzz(9) == "Fizz");
    }

    SECTION("Returns Buzz for multiples of 5 only") {
        REQUIRE(fizzbuzz(5) == "Buzz");
        REQUIRE(fizzbuzz(10) == "Buzz");
    }

    SECTION("Returns the number for non-multiples of 3 or 5") {
        REQUIRE(fizzbuzz(1) == "1");
        REQUIRE(fizzbuzz(7) == "7");
    }
}