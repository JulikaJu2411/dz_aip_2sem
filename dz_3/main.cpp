#include <iostream>
#include <math.h>

/*Пользователь вводит три числа. Увеличьте первое число в два раза, второе число уменьшите на 3,
 третье число возведите в квадрат и затем найдите сумму новых трех чисел. */

int main()
{
    float a;
    float b;
    float c;
    float a1;
    float b1;
    float c1;
    float sum;

    std::cout << "Enter first number" << std::endl;
    std::cin >> a;
    std::cout << "Enter second number" << std::endl;
    std::cin >> b;
    std::cout << "Enter third number" << std::endl;
    std::cin >> c;
    a1=a*2;
    b1=b-3;
    c1=c*c;
    std::cout << "New number:" <<std::endl
              <<"First- " << a1 <<std::endl
              <<"Second- " << b1 <<std::endl
              <<"Thired- " <<c1 << std::endl;
    sum=a1+b1+c1;
    std::cout << "Summa= " << sum << std::endl;
}
