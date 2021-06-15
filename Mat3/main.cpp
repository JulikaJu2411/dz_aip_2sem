#include <iostream>

using namespace std;

/*Дана матрица. Элементы первой строки — количество осадков в соответствующий
день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
(ураган — когда самый сильный ветер был в самый дождливый день).*/

int main(){

    const int rows = 2;  // строки
    const int cols = 7;  // столбцы
    int mat[rows][cols];
    string answer;
    int maxOsad = 0;
    int maxVeter = 0;


    cout << "Output of the original matrix\n";                   // вывод первоначальной матрицы + знаяения Максимума
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i % 2 == 0) {
                mat[i][j] = rand() % 21;
                if (mat[i][j] > maxOsad)
                    maxOsad = mat[i][j];
            }
            else {
                mat[i][j] = rand() % 101;
                if (mat[i][j] > maxVeter)
                    maxVeter = mat[i][j];
            }
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "Conclusion\n";                                      //смотрим, есть ли такой день
    for (int j = 0; j < cols; j++) {
        if ((mat[0][j] == maxOsad) && (mat[1][j] == maxVeter))
            answer = "There was a hurricane these days";
        else
            answer = "There was no hurricane these days";
    }
    cout << answer;

}
