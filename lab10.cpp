#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <windows.h>
using namespace std;

template <int M, int N>
void fillArray(int(&a)[M][N]) {
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            a[i][j] = rand() % 41 - 20;
}

template <int M, int N>
void printArray(int(&a)[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cout << setw(5) << a[i][j];
        cout << endl;
    }
}

// Завдання 1
void task1() {
    cout << "\nЗавдання 1" << endl;
    const int m = 4, n = 3;
    int a[m][n];
    fillArray(a);
    printArray(a);
    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 == 0) count++;
        cout << "Рядок " << i + 1 << ": парних чисел = " << count << endl;
    }
}

// Завдання 2
void task2() {
    cout << "\nЗавдання 2" << endl;
    const int m = 6, n = 4;
    int a[m][n];
    fillArray(a);
    printArray(a);
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < m; i++)
            if (a[i][j] % 2 == 0) count++;
        cout << "Стовпчик " << j + 1 << ": парних чисел = " << count << endl;
    }
}

// Завдання 3
void task3() {
    cout << "\nЗавдання 3" << endl;
    const int m = 5, n = 7;
    int a[m][n];
    fillArray(a);
    printArray(a);
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += a[i][j];
        cout << "Сума рядка " << i + 1 << " = " << sum << endl;
    }
}

// Завдання 4
void task4() {
    cout << "\nЗавдання 4" << endl;
    const int m = 4, n = 6;
    int a[m][n];
    fillArray(a);
    printArray(a);
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++)
            sum += a[i][j];
        cout << "Сума стовпчика " << j + 1 << " = " << sum << endl;
    }
}

// Завдання 5
void task5() {
    cout << "\nЗавдання 5" << endl;
    const int m = 3, n = 4;
    int a[m][n];
    fillArray(a);
    printArray(a);
    int mx = a[0][0], mi = 0, mj = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > mx) {
                mx = a[i][j];
                mi = i;
                mj = j;
            }
    cout << "Максимальний елемент = " << mx
        << ", номер: рядок " << mi + 1 << ", стовпчик " << mj + 1 << endl;
}

// Завдання 6
void task6() {
    cout << "\nЗавдання 6" << endl;
    const int m = 4, n = 7;
    int a[m][n];
    fillArray(a);
    printArray(a);
    int mn = a[0][0], mi = 0, mj = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] < mn) {
                mn = a[i][j];
                mi = i;
                mj = j;
            }
    cout << "Мінімальний елемент = " << mn
        << ", номер: рядок " << mi + 1 << ", стовпчик " << mj + 1 << endl;
}

// Завдання 15
void task15() {
    cout << "\nЗавдання 15" << endl;
    const int m = 3, n = 3;
    int a[m][n];
    fillArray(a);
    printArray(a);
    int mainDiag = 0, sideDiag = 0;
    for (int i = 0; i < m; i++) {
        mainDiag += a[i][i];
        sideDiag += a[i][n - 1 - i];
    }
    cout << "Сума головної діагоналі = " << mainDiag << endl;
    cout << "Сума побічної діагоналі = " << sideDiag << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task15();

    return 0;
}