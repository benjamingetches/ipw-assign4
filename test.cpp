#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "functions_to_implement.hpp"
#include <vector>

TEST_CASE("Sum function tests", "[sum]") {
    SECTION("pos nums") {
        std::vector<int> numbers = {1, 2, 3, 4, 5};
        REQUIRE(Sum(numbers) == 15);
    }

    SECTION("empty edge case") {
        std::vector<int> numbers = {};
        REQUIRE(Sum(numbers) == 0);
    }

    SECTION("one number") {
        std::vector<int> numbers = {42};
        REQUIRE(Sum(numbers) == 42);
    }

    SECTION("Negative") {
        std::vector<int> numbers = {-1, -2, -3, -4};
        REQUIRE(Sum(numbers) == -10);
    }

    SECTION("Mixed") {
        std::vector<int> numbers = {-2, 0, 4, -1, 3};
        REQUIRE(Sum(numbers) == 4);
    }

    SECTION("Large numbers") {
        std::vector<int> numbers = {1000000, 2000000, 3000000};
        REQUIRE(Sum(numbers) == 6000000);
    }
}

TEST_CASE("Factorial tests", "[fact]")
{
    SECTION("One test, just for fun"){
        int n = 7;
        REQUIRE(Factorial(n) == 5040);
    }
}

TEST_CASE("RemoveFirstSubstring tests", "[string]") {
    SECTION("std case") {
        REQUIRE(RemoveFirstSubstring("hello world", "world") == "hello ");
        REQUIRE(RemoveFirstSubstring("hello world", "o") == "hell world");
    }

    SECTION("substring dne") {
        REQUIRE(RemoveFirstSubstring("hello world", "xyz") == "hello world");
    }

    SECTION("only first subst removed") {
        REQUIRE(RemoveFirstSubstring("hello hello hello", "hello") == " hello hello");
    }

    SECTION("edge case empty") {
        REQUIRE(RemoveFirstSubstring("", "test") == "");
        REQUIRE(RemoveFirstSubstring("hello", "") == "hello");
        REQUIRE(RemoveFirstSubstring("", "") == "");
    }

    SECTION("edge case overlaps") {
        REQUIRE(RemoveFirstSubstring("aaaa", "aa") == "aa");
    }
}

TEST_CASE("RemoveAllSubstrings tests", "[string]") {
    SECTION("std case") {
        REQUIRE(RemoveAllSubstrings("hello world", "l") == "heo word");
        REQUIRE(RemoveAllSubstrings("banana", "a") == "bnn");
    }

    SECTION("working with spaces") {
        REQUIRE(RemoveAllSubstrings("hello hello hello", "hello ") == "hello");
    }

    SECTION("no substr") {
        REQUIRE(RemoveAllSubstrings("hello world", "xyz") == "hello world");
    }

    SECTION("edge case empty") {
        REQUIRE(RemoveAllSubstrings("", "test") == "");
        REQUIRE(RemoveAllSubstrings("hello", "") == "hello");
        REQUIRE(RemoveAllSubstrings("", "") == "");
    }

    SECTION("checking overlaps") {
        REQUIRE(RemoveAllSubstrings("aaaa", "aa") == "");
    }

    SECTION("caps matter...") {
        REQUIRE(RemoveAllSubstrings("Hello HELLO hello", "hello") == "Hello HELLO ");
    }
}