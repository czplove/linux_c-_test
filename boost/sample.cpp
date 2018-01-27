#include <iostream>

#include "boost/lexical_cast.hpp"

//-using namespace std;

int main()
{
    std::string s="100";
    int a=boost::lexical_cast<int>(s);
    int b=1;
    std::cout<<(a+b) <<std::endl;//Êä³ö101
    return 0;
}
