#include <iostream>

int main()
{

    float x;
    float y ;

    std::cin >> x;

    if (x > -8)
    y = (2 + x)*(2 + x) + 7;
    else{

         if (x == -8)
         y = 5;

         else{

         if (x < -8)
         y = abs(2 * x - 1) -1; }
    }
    std::cout<< y << "\n" << std::endl;



}
