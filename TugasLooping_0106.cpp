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

// Prosedur tampil hasil prima
void tampilPrima() {
    if (isPrima(n)) {
        cout << n << " adalah bilangan prima\n";
    } else {
        cout << n << " bukan bilangan prima\n";
    }
}

// Prosedur tampil hasil fibonacci
void tampilFibonacci() {
    if (isFibonacci(n)) {
        cout << n << " adalah bilangan Fibonacci\n";
    } else {
        cout << n << " bukan bilangan Fibonacci\n";
    }
}

// Function menu
void tampilMenu() {
    cout << "\n=== MENU ===\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}

int main() {
    while (true) {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                inputAngka();
                tampilPrima();
                break;

            case 2:
                inputAngka();
                tampilFibonacci();
                 break;

            case 0:
                cout << "Program selesai.\n";
                return 0;

            default:
                cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}