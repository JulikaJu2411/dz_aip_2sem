#include <iostream>
#include <string>

int main()
{
   //Посчитать количество положительных/отрицательных элементов массива

    const int n = 20;					//создаём и записываем исходный массив
        int arr[n];
        int MZero = 0;
        int LZero = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 21-10;
        }
        for (int i = 0; i < n; i++)
            std::cout << "\n" << arr[i];

        for (int i = 0; i < n; i++) {
            if (arr[i] > 0)
                MZero++;
            else
                LZero++;
        }
        std::cout << "\n Is more than zero  " << MZero << "  amount\n";
        std::cout << "\n Is more less zero " << LZero << "  amount\n";

}
