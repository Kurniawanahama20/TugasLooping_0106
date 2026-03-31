#include <iostream>
using namespace std;

// Variabel global
int n, pilihan;

// Function untuk cek bilangan prima
bool isPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Function untuk cek bilangan Fibonacci
bool isFibonacci(int n) {
    int a = 0, b = 1, c = 0;

    while (c <= n) {
        if (c == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// Prosedur input angka
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> n;
}

