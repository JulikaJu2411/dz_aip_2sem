#include <iostream>
#include <string>

int main(){

    /* Вычислить сумму элементов массива: b. больших 7, меньших 7, больше 3 */

    const int n = 10;							//создаём массив с переменными и записываем его
        int arr[n];
        int summMoreSeven = 0,
            summLessSeven = 0,
            summMoreThree = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 10;
            std::cout << arr[i] << "\n";
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] > 7) {
                summMoreSeven = summMoreSeven + arr[i];
            }
            if (arr[i] < 7) {
                summLessSeven = summLessSeven + arr[i];
            }
            if (arr[i] > 3) {
                summMoreThree = summMoreThree + arr[i];
            }
        }
        std::cout << "\nsumm elements More Seven = " << summMoreSeven << "\n";
        std::cout << "\nsumm elements Less Seven = " << summLessSeven << "\n";
        std::cout << "\nsumm elements More Three = " << summMoreThree << "\n";

}
