#include <iostream>

int main(){
    /*№10 Заменить все отрицательные элементы массива нулями*/

    const int n = 7;					//создание нужного нам массива
        int arr[n];

        std::cout << "It was\n\n";			//записываем исходный для сравнения
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 41 - 20;
        }

        for (int i = 0; i < n; i++)			//преобразование отрицательных чисел в нули
            std::cout << arr[i] << "\t";
        std::cout << "\n\n";
        for (int i = 0; i < n; i++)
            if (arr[i] < 0)
                arr[i] = 0;

        std::cout << "Has become\n\n";			//записываем получившийся массив
        for (int i = 0; i < n; i++)
            std::cout << arr[i] << "\t";

}
