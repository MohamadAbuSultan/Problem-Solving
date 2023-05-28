
#include <iostream>

std::string greet(std::string name)
{
    if (name == "Johnny") {
        return "Hello, my love!";
    }
    return "Hello, " + name + "!";
}

int main()
{
    std::cout << greet("Mohamad");
}
