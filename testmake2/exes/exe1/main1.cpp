#include "../../dlls/dll1/dll1.h"
#include <iostream>

int main()
{
    dll1 lDll1;
    std::cout << lDll1.getText()<<std::endl;
    return 0;
}