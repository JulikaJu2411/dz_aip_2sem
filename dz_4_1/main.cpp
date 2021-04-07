#include <iostream>
/*Вывести на экран Н строк из нулей,
причем количество нулей в каждой строке равно номеру строки.
Количество строк Н вводит пользователь */

int main()
{

    int a;

    std::cout << "Enter number, please " <<std::endl;
    std::cin >> a;
    for(int i=0; i < a; i++){
        for(int j=0; j <= i; j++)
            std::cout << '0';
        std::cout << std::endl;
    }
    std::cout << "These are your zeros" <<std::endl;
    return 0;
}
