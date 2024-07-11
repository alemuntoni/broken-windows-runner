#include <iostream>

#include "stb/stb_image.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("") {
    int w, h;
    auto* ptr =
        stbi_load("../TextureDouble_A.png", &w, &h, nullptr, 4);

    REQUIRE(ptr);
}
