#include <iostream>

int main()
{
    float x,y;

    std::cin>> x >> y;

    bool r1 = (y>1-x) && (y>2*x*x);
    bool r2 = (x<1)&&(y>1-x)&&(y<2*x*x);

    if (r1 || r2)
        std::cout<< "yes";
    else
        std::cout<< "no";
}
