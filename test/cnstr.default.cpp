// Eggs.Variant
//
// Copyright Agustin K-ballo Berge, Fusion Fenix 2014
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <eggs/variant.hpp>
#include <string>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

constexpr std::size_t npos = eggs::variant<>::npos;

TEST_CASE("variant<Ts...>::variant()", "[variant.cnstr]")
{
    eggs::variant<int, std::string> v;

    REQUIRE(bool(v) == false);
    REQUIRE(v.which() == npos);
    REQUIRE(v.target_type() == typeid(void));
}

TEST_CASE("variant<>::variant()", "[variant.cnstr]")
{
    eggs::variant<> v;

    REQUIRE(bool(v) == false);
    REQUIRE(v.which() == npos);
    REQUIRE(v.target_type() == typeid(void));
}
