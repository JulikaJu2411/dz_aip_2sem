#include <iostream>
#include <math.h>

/*Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:Конус (площадь)*/

int main()
{
    float h;
    float r;
    float S;

    std::cout << "enter the height" << std::endl;
    std::cin >> h;
    std::cout << "enter the radius" << std::endl;
    std::cin >> r;
    S=3.14*r*(r+sqrt((r*r)+(h*h)));
    std::cout << "S= " << S << std::endl;

}
