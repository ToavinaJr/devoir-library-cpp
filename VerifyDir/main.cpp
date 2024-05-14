#include "./header/Activator.hpp"
#include <string>
#include <iostream>

using namespace Validator;

int main()
{
    auto activator = new CodeValidator;

    if ( activator->getStatus() == "active") 
    {
        std::cout << "Your account is activate" << std::endl;
    }
    else
    {
        if ( activator->getAttempsLeft() < 0 )
            return 1;
        
        std::cout << "Your account is not activate\n You have  " << activator->getAttempsLeft() << " attempts left" << std::endl;
    }
    delete activator;

    return 0;
}