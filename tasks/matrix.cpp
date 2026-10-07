/*
Попробуй совершенно самостоятельно (не подглядывая в прошлые примеры) написать код, который создает двумерный вектор (матрицу) 2х2 и выводит все его элементы через два вложенных цикла (for внутри for).
*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1,5},
        {1,5}
    };

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            std::cout << matrix[i][j] << " ";
        }
    }

}