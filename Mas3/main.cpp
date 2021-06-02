#include <iostream>
#include <string>

int main(){
    /*№9 Посчитать количество элементов массива, больших нуля */

    const int n = 20;					//создаём и записываем исходный массив
        int arr[n];
        int summMZero = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 21-10;
        }
        for (int i = 0; i < n; i++)
            std::cout << "\n" << arr[i];

        for (int i = 0; i < n; i++)
            if (arr[i] > 0)
                summMZero++;
        std::cout << "\n The sum of the elements is more than zero  = " << summMZero << "\n";

}
