#include <iostream>
#include <fstream>
#include <math.h>

/*Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:Конус (площадь)*/

int main()
{
    float h;
    float r;


    std::ofstream an;
    std::ifstream en;

    std::cin >> h >> r;

     an.open("enter.txt");
     an << h << " " << r;

     an.close();

     en.open("enter.txt");
     en >> h >> r;
     en.close();


     float S = 3.14*r*(r+sqrt((r*r)+(h*h)));

     an.open("answer.txt");

     an << "S= "<< S;

     an.close();

}
