#include <fmt/core.h>
#include <fmt/color.h>

#include "greet_content/en_greet_content.h"

void EnGreetContent::say_hi() {
    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "Hello, world!\n");
}