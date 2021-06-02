#include <iostream>
#include <string>

int main(){

    /* Сгенерировать массив со случайными числами в диапазоне : (G -20:20)*/

    const int n = 10;
        int arr[n];

        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 41-20;
        }
        for (int i = 0; i < n; i++)
            std::cout << arr[i] << "\n";

}
