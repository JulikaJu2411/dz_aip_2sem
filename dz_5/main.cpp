#include <iostream>

/*Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
Скорость вращения (градус в час, градус в минуту, радиан в минуту)*/

int main()
{
    float a;
    float b;
    float c;

    std::cout<< "Enter grade in hour (g/h)" <<std::endl;
    std::cin>> a;
    std::cout<< "g/min= " << a/60 <<std::endl;
    std::cout<< "rad/min= " << (3.14*a)/(180*60) <<std::endl;

    std::cout<< " " <<std::endl;

    std::cout<< "Enter grade in minute (g/min)" <<std::endl;
    std::cin>> b;
    std::cout<< "g/h= " << b*60 <<std::endl;
    std::cout<< "rad/min= " << (3.14*b)/180 <<std::endl;

    std::cout<< " " <<std::endl;

    std::cout<< "Enter radians in minute (rad/min)" <<std::endl;
    std::cin >> c;
    std::cout<< "g/h= " << ((c*180)/3.14)*60 <<std::endl;
    std::cout<< "g/min= " <<(c*180)/3.14 <<std::endl;
}
