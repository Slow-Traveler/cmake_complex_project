   #include "peopleName.h"
   
   PeopleName::PeopleName(std::string str)
    {
        name = str;
        std::cout<<"creat a SayName object: "<<std::endl;
    }
    std::string PeopleName::getName()
    {
        return name;
    }
    void PeopleName::setNmae(std::string str)
    {
        name = str;
    }