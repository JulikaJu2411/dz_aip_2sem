#include <iostream>

using namespace std;

/*В квадратной матрице найти сумму положительных элементов, лежащих на и выше
главной диагонали и расположенных в чётных столбцах.*/

int main(){

    const int rows = 5;  // строки
    const int cols = 5;  // столбцы
    int mat[rows][cols];
    int summ = 0;


    cout << "Output of the original matrix\n";                   // вывод первоначальной матрицы
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = rand() % 21 - 10;
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";


    for (int i = 0; i < rows; i++) {                            // выбираем те числа, которые И по диогонали и выше, И положительные, И в чётных столбцах
        for (int j = 0; j < cols; j++) {
            if ((j >= i) && (mat[i][j] > 0) && (j % 2 == 1)) {
                summ = summ + mat[i][j];
            }
        }
    }
    cout << "Output of the sum of positive elements lying on and above the main diagonal and located in even columns\n";
    cout << summ;
    cout << "\n";

}
