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

     en.open("enter.txt");
     en >> h;
     en >> r;
     en.close();

     float S = 3.14*r*(r+sqrt((r*r)+(h*h)));

     an.open("answer.txt");
     an << "Enter height and radius " <<std::endl;
     an << "S=";
     an<< S <<std::endl;
     an.close();

}
