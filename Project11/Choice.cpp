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

        std::cout << "��������� ��� ������ � ��������" << std::endl;
        std::cout << "�������� ������ ����� �������:" << std::endl;
        std::cout << "1. ������ �������" << std::endl;
        std::cout << "2. ��������� �������������" << std::endl;
        std::cout << "0. ����� �� ���������" << std::endl;
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
            std::cout << "������������ �����. ���������� �����." << std::endl;
            continue;
        }

        system("cls");

        std::cout << "������:" << std::endl;
        printArray(array, size);

        std::cout << "�������� ������ ����������:\n1. �� ��������\n2. �� �����������\n3. �� �������� ������\n";
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
            std::cout << "������ �������� ��� ���������." << std::endl;
            printArray(array, size);
            break;
        default:
            std::cout << "������������ ����� ����������." << std::endl;
            break;
        }

        system("pause");
    }

    return 0;
}
