#include "Functions.hpp"

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

