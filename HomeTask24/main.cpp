#include<iostream>



void resize_arr(int*& arr, int& currentLength, int newLength) {
    if (newLength < 0) {
        std::cerr << "Ошибка: Новая длина массива должна быть неотрицательной." << std::endl;
        return;
    }
    int* newArr = new int[newLength];
    for (int i = 0; i < std::min(currentLength, newLength); i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    currentLength = newLength;
}




int main() {
	setlocale(LC_ALL, "RU");
	int n, m;

    std::cout << "Задача №1\n ";
    std::cout << "Введите размер массива A: ";
    std::cin >> n;
    std::cout << "Введите размер массива B: ";
    std::cin >> m;
   
    int* A = new int[n];
    std::cout << "Введите элементы массива A:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    int* B = new int[m];
    std::cout << "Введите элементы массива B:" << std::endl;
    for (int i = 0; i < m; i++) {
        std::cin >> B[i];
    }

    int* C = new int[n + m];
    for (int i = 0; i < n; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < m; i++) {
        C[n + i] = B[i];
    }
    delete[] A;
    delete[] B;

    std::cout << "Массив C, состоящий из элементов A и B:" << std::endl;
    for (int i = 0; i < n + m; i++) {
        std::cout << C[i] << " ";
    }
    std::cout << std::endl;
    delete[] C;


    std::cout << "Задача №2\n ";
    int* myArray = nullptr;
    int currentLength = 0;
    int initialLength;
    std::cout << "Введите начальную длину массива: ";
    std::cin >> initialLength;
    myArray = new int[initialLength];
    currentLength = initialLength;
    std::cout << "Массив инициализирован с длиной " << currentLength << std::endl;
    int newLength;
    std::cout << "Введите новую длину массива: ";
    std::cin >> newLength;
    resize_arr(myArray, currentLength, newLength);
    std::cout << "Массив изменен на длину " << currentLength << std::endl;
    delete[] myArray;































	return 0;
}