#include <iostream>
#include <string>

int main(){

    // Создать новый массив из двух других массивов путём операций над элементами массивов: d-сложение

    const int n = 10;						//создаём 3 массива
        float arr1[n];
        float arr2[n];
        float arr3[n];
        std::cout << "First array \t Second array \t\t Result \n";

        for (int i = 0; i < n; i++) {
            arr1[i] = rand() % 101;
            arr2[i] = rand() % 11;
            std::cout << arr1[i] << "\t\t";
            std::cout << arr2[i] << "\t\t\t";
            arr3[i] = arr1[i] - arr2[i];		//операция вычитания
            std::cout << arr3[i] << "\n";		//вывод последнего массива
        }

}
