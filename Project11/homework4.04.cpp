#include <iostream>
#include <Windows.h>

void manualInput(float arr[], int size);

void autoInput(float arr[], int size);

void printArray(float arr[], int size);

//пузырьковая сортировка убывание
void bubbleSortDescending(float arr[], int size);

//пузырьковая сортировка возрастание
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

void manualInput(float arr[], int size)
{
   for (int i = 0; i < size; ++i) {
       std::cout << "Введите элемент " << i + 1 << ": ";
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
    std::cout << "Массив отсортирован по убыванию" << std::endl;
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
    std::cout << "Массив отсортирован по возрастанию" << std::endl;
}
