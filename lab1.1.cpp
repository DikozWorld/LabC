#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // Способ 1: добавление элементов с помощью push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Способ 2: добавление элементов с помощью insert и initializer_list
    std::vector<int> additional = {40, 50, 60};
    vec.insert(vec.end(), additional.begin(), additional.end());

    // Вывод элементов вектора
    std::cout << "Элементы вектора: ";
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}