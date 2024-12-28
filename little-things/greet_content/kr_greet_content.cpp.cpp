#include <fmt/core.h>
#include <fmt/color.h>

#include "greet_content/kr_greet_content.h"

void KrGreetContent::say_hi() {
    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "안녕, 세상아!\n");
}