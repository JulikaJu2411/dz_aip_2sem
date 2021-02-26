#include <iostream>

/*Вычислите значение выражения: (a+4b)(a−3b)+a^2 при a=2 и b=3. Ответ:  -94*/

int main()
{
    float a;
    float b;
    float c;


    std::cout<< "(a+4b)(a-3b)+a^2 " <<std::endl;
    std::cout<< "Enter two numbers" <<std::endl;
    std::cin>> a >> b;
    c=(a+4*b)*(a-3*b)+a*a;
    std::cout<< "(a+4b)(a-3b)+a^2= " << c <<std::endl;
}
