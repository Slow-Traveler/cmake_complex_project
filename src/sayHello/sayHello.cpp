#include <iostream>
#include "sayHello.h"


SayHello::SayHello()
{
    std::cout<<"create a SayHello Object"<<std::endl;
}
SayHello::SayHello( std::string str)
{
    PeopleName people("str");
    std::cout<<"create a SayHello Object: "<<people.getName()<<std::endl;
}