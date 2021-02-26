#include <iostream>

/*Вводятся три целых числа. Определить какое из них наибольшее.*/

int main()
{
   int a;
   int b;
   int c;
   int m;

   std::cout<< "Enter the first number " <<std::endl;
   std::cin>> a;
   std::cout<< "Enter the second number " <<std::endl;
   std::cin>> b;
   std::cout<< "Enter the third number " <<std::endl;
   std::cin>> c;

   if(a > b) m = a;
      else m = b;
      if(m < c) m = c;
      std::cout << "Very big number: " << m <<std::endl;

}
