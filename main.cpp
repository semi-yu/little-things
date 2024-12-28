#include <memory>

#include "greeting.h"
#include "greet_content.h"

int main() {
    auto korean_msg = std::make_unique<KrGreetContent>();
    auto english_msg = std::make_unique<EnGreetContent>();
    auto chinese_msg = std::make_unique<CnGreetContent>();

    auto greeter = std::make_unique<Greeting>(std::move(korean_msg));
    greeter->act();

    greeter = std::make_unique<Greeting>(std::move(english_msg));
    greeter->act();

    greeter = std::make_unique<Greeting>(std::move(chinese_msg));
    greeter->act();

    return 0;
}