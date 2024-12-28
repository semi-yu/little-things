#include <fmt/core.h>
#include <fmt/color.h>

#include "greet_content/cn_greet_content.h"

void CnGreetContent::say_hi() {
    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "你好世界!\n");
}