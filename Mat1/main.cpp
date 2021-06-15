#include <iostream>

/*Преобразовать матрицу: элементы строки, в которой находится минимальный
элемент матрицы, заменить нулями.*/

int main(){

    const int rows = 4;  // строки
    const int cols = 4;  // столбцы
    int mat[rows][cols];
    int min = 100;
    int rowMin = 0;


    std::cout << "Output of the original matrix\n";                   // вывод первоначальной матрицы
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = rand() % 21 - 10;
            std::cout << mat[i][j] << " ";

            if (mat[i][j] < min)                                //нахождение минимума и строки с минимумом
                min = mat[i][j];
            if (mat[i][j] <= min)
                rowMin = i;
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    std::cout << "Output of the final matrix\n";
    for (int i = 0; i < rows; i++) {                            //вывод итоговой матрицы
        for (int j = 0; j < cols; j++) {
            if (rowMin == i)
                mat[i][j] = 0;
            std::cout << mat[i][j] << " ";
        }
        std::cout << "\n";
    }

}
