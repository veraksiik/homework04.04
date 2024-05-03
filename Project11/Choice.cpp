#include "Choice.hpp"
#include "Functions.hpp"
#include <iostream>
#include <Windows.h>



int Choice()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 10;
    float array[size]{};

    int choice;
    int sortChoice;

    while (true) {
        system("cls");

        std::cout << "Программа для работы с массивом" << std::endl;
        std::cout << "Выберите способ ввода массива:" << std::endl;
        std::cout << "1. Ввести вручную" << std::endl;
        std::cout << "2. Заполнить автоматически" << std::endl;
        std::cout << "0. Выйти из программы" << std::endl;
        std::cin >> choice;

        if (choice == 1) {
            manualInput(array, size);
        }
        else if (choice == 2) {
            autoInput(array, size);
        }
        else if (choice == 0) {
            break;
        }
        else {
            std::cout << "Некорректный выбор. Попробуйте снова." << std::endl;
            continue;
        }

        system("cls");

        std::cout << "Массив:" << std::endl;
        printArray(array, size);

        std::cout << "Выберите способ сортировки:\n1. По убыванию\n2. По возрастанию\n3. Не изменять массив\n";
        std::cin >> sortChoice;

        switch (sortChoice) {
        case 1:
            bubbleSortDescending(array, size);
            printArray(array, size);
            break;
        case 2:
            bubbleSortAscending(array, size);
            printArray(array, size);
            break;
        case 3:
            std::cout << "Массив остается без изменений." << std::endl;
            printArray(array, size);
            break;
        default:
            std::cout << "Некорректный выбор сортировки." << std::endl;
            break;
        }

        system("pause");
    }

    return 0;
}
