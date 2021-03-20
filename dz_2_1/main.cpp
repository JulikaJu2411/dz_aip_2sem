#include <iostream>
#include <fstream>

/*Вывести на экран Первую букву имени из символов "*" (звездочка)*/

int main()
{
    std::ofstream y;
    y.open("Bukva.txt");
     y << "*  * " << std::endl;
     y << "* * *" << std::endl;
     y << "* * *" << std::endl;
     y << "*** *" << std::endl;
     y << "* * *" << std::endl;
     y << "* * *" << std::endl;
     y << "*  * " << std::endl;
     y.close();
        return 0;
}

