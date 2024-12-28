#ifndef __GREETING_H__
#define __GREETING_H__

#include <memory>

#include "greet_content/greet_content.h"

class Greeting {
    std::unique_ptr<GreetContent> message;

public:
    Greeting(std::unique_ptr<GreetContent> message);

    void act();
};

#endif