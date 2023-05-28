
#include <iostream>

std::string greet(std::string name)
{
    //if (name == "Johnny") {
    //    return "Hello, my love!";
    //}
    return "Hello, " + (name == "Johnny" ? " my love" : name) + "!";
}

int main()
{
    std::cout << greet("Mohamad") << std::endl;
    std::cout << greet("Johnny");
}
