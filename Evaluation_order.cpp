#include <iostream>


int applicative(){
    std::cout << "C++ it's applicative-order" << std::endl;
    return 1;
}

int Trier(int x, int y)
{
    if(x == 0) return 0;
    return 1;
}


int main()
{

    std::cout << Trier( 0,  applicative()) << std::endl;

    return 0;
}