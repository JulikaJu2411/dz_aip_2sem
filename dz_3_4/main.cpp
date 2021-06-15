#include <iostream>
#include <math.h>
int main()
{
    float x,y;
    const float r1=1;
    const float r2=2;

    std::cin>> x >> y;
    float a=sqrt(x*x+y*y);


    bool p = (a > r1) && (a < r2);

    if (p && (y>0))
        std::cout<< "yes";
    else
        std::cout<< "no";

}
