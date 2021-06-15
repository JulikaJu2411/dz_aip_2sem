#include <iostream>
#include <fstream>

using namespace std;

/*Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
на экран матрицу, описывающую следующие сущности. Двумерное изображение. Изображение состоит из пикселей. Каждый пиксель
характеризуется яркостью цветовых каналов: красный, синий, зелёный. */

int main(){

    const int rows = 3;                    // строки (R G B)
    const int cols = 6;                    // столбцы (пиксели)
    int mat[rows][cols];
    int ch = 0;

    ifstream IntF;
    ofstream OutF;


    OutF.open("int.txt", std::ios::out);
    for (int schet = rows * cols; schet > 0; schet--) {
        OutF << rand() % 256 << " ";
    }
    OutF.close();


    IntF.open("int.txt", std::ios::out);
    OutF.open("out.txt", std::ios::out);

    cout << "Output of the matrix RGB\n";
    OutF << "Output of the matrix RGB\n";           // вывод (построчно R G B)(столбцы – пиксели)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            IntF >> ch;
            mat[i][j] = ch;
            cout << mat[i][j] << "\t";
            OutF << mat[i][j] << "\t";
        }
        cout << "\n";
        OutF << "\n";
    }

    IntF.close();
    OutF.close();

}
