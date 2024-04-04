#include <iostream>
#include <Windows.h>

void manualInput(float arr[], int size);

void autoInput(float arr[], int size);

void printArray(float arr[], int size);

//����������� ���������� ��������
void bubbleSortDescending(float arr[], int size);

//����������� ���������� �����������
void bubbleSortAscending(float arr[], int size);


int main() {
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

void manualInput(float arr[], int size)
{
   for (int i = 0; i < size; ++i) {
       std::cout << "������� ������� " << i + 1 << ": ";
       std::cin >> arr[i];
   }
}

void autoInput(float arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
}

void printArray(float arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void bubbleSortDescending(float arr[], int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    std::cout << "������ ������������ �� ��������" << std::endl;
}

void bubbleSortAscending(float arr[], int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    std::cout << "������ ������������ �� �����������" << std::endl;
}
