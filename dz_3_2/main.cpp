#include <iostream>



int main()
{
    float x;
    float y = 0;

    std::cin >> x;

    if (x > 5)
    y = 3*x - 5;
    else{

        if (x == 5)
         y = 10 ;

            else {

            if (x < 5)
            y = 2 * abs( x - 2 ) +5; }
    }
    std::cout<< y << "\n"<< std::endl;
}
