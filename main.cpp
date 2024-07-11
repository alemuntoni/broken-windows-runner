#include <iostream>

#include "stb/stb_image.h"

int main(int argc, char *argv[])
{
    int w, h;
    auto* ptr = stbi_load("", &w, &h, nullptr, 4);

    if (ptr) {
        std::cerr << "ok\n";
    }

    return 0;
}
