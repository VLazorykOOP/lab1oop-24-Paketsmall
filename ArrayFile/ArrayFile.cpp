#include <iostream>

int main() {
    int N, M;

    // Введення розмірів масивів A і B
    std::cout << "Введіть розмір масиву A: ";
    std::cin >> N;

    std::cout << "Введіть розмір масиву B: ";
    std::cin >> M;

    // Введення елементів масиву A
    int* A = new int[N];
    std::cout << "Введіть елементи масиву A:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    // Введення елементів масиву B
    int* B = new int[M];
    std::cout << "Введіть елементи масиву B:\n";
    for (int i = 0; i < M; ++i) {
        std::cout << "B[" << i << "]: ";
        std::cin >> B[i];
    }

    // Створення масиву C розміром N + M
    int* C = new int[N + M];
    int cIndex = 0;

    // Розміщення додатних елементів масиву A
    for (int i = 0; i < N; ++i) {
        if (A[i] > 0)
            C[cIndex++] = A[i];
    }

    // Розміщення додатних елементів масиву B
    for (int i = 0; i < M; ++i) {
        if (B[i] > 0)
            C[cIndex++] = B[i];
    }

    // Розміщення від'ємних елементів масиву A
    for (int i = 0; i < N; ++i) {
        if (A[i] < 0)
            C[cIndex++] = A[i];
    }

    // Розміщення від'ємних елементів масиву B
    for (int i = 0; i < M; ++i) {
        if (B[i] < 0)
            C[cIndex++] = B[i];
    }

    // Вивід результату
    std::cout << "Масив C:\n";
    for (int i = 0; i < cIndex; ++i) {
        std::cout << "C[" << i << "]: " << C[i] << "\n";
    }

    // Звільнення динамічно виділеної пам'яті
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
