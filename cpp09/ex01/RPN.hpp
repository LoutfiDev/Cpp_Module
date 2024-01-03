

#ifndef __RPN__
#define __RPN__

#include <iostream>
#include <cstring>
#include <sstream>
#include <stack>

class RPN 
{
    private :
        RPN();
    public :
        static void calc (std::string mathExpress);
        ~RPN();
};

#endif