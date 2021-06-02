#include <iostream>
#include <string>

int main(){

    /*Картотека видеотеки организована в виде массива структур с полями : название
            фильма, стоимость, режиссер.Ввести информацию по видеотеке.A	B	C*/

    const int n = 6;						//создаём 3 массива (Фамилии Возраст Пол)
        int rejesser[n];
        int coast[n];
        std::string film[n];



        std::cout << "Film \t"
            << "\t Cost"
            << "\t\t Rejesser \n";

        for (int i = 0; i < n; i++) {			//Записываем исходные данные
            rejesser[i] = rand() % 2 + 1;
            coast[i] = (rand() % 1000) + 5000;
            film[i] = i + 1;

            std::cout << film[i] << "\t\t\t";
            std::cout << coast[i] << "\t\t\t";
            std::cout << rejesser[i] << "\n";
        }

        /*f. вывести информацию о фильмах, стоимость которых больше, чем среднее
        максимальной и минимальной стоимости*/

        int minCoast = 100000;
        int maxCoast = 0;
        int srCoast = 0;

        for (int i = 0; i < n; i++)					//расписываем минимум и максимум цены
            if (coast[i] < minCoast)
                minCoast = coast[i];
        for (int i = 0; i < n; i++)
            if (coast[i] > maxCoast)
                maxCoast = coast[i];
        srCoast = (maxCoast + minCoast) / 2;		//средняя между максимумом цены и минимумом
        std::cout << "\n\n Information about films that cost more than the average maximum and minimum cost\n";
        for (int i = 0; i < n; i++) {
            if (coast[i] > srCoast) {
                std::cout << film[i] << "\t\t\t";
                std::cout << coast[i] << "\t\t\t";
                std::cout << rejesser[i] << "\n";
            }
        }
        std::cout << "\n";


        /*e.вывести информацию о фильмах одного режиссера*/
        std::cout << "\n\n Information about the films of one (first) director \n";
        for (int i = 0; i < n; i++) {
            if (rejesser[i] == 1) {
                std::cout << film[i] << "\t\t\t";
                std::cout << coast[i] << "\t\t\t";
                std::cout << rejesser[i] << "\n";
            }
        }
        std::cout << "\n";


        /*b. вывести информацию о фильмах, которые расположены между фильмами с
        максимальной и минимальной стоимостью.*/
        std::cout << "\n Information about films that are located between the films with the maximum and minimum cost \n";
        for (int i = 0; i < n; i++)
            if (coast[i] == maxCoast)
                while (coast[i] > minCoast) {
                    std::cout << film[i] << "\t\t\t";
                    std::cout << coast[i] << "\t\t\t";
                    std::cout << rejesser[i] << "\n";
                    i++;
                }

}
