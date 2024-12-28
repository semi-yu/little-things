#include <memory>

#include "greeting.h"
#include "greet_content/greet_content.h"

Greeting::Greeting(std::unique_ptr<GreetContent> message) {
    this->message = std::move(message);
}

void Greeting::act() {
    message->say_hi();
}