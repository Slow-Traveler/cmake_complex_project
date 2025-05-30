#include <iostream>

class PeopleName
{
    public:
    PeopleName(){};
    PeopleName(std::string str);
    std::string getName();
    void setNmae(std::string str);
    private:
    std::string name;

};