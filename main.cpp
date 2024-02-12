#include <iostream>
#include <vector>
#include <limits>
#include "helper/operasi.h"
#include "helper/vector_ext.h"

using namespace std;

// PLEASE OPEN README.md before run program
const bool isDummy = true;      // <- Edit mode sesuai dengan kebutuhan

int inputPilihan() {
    int pilihan;

    while (true) {
        cout << "Pilih operasi matriks:\n";
        cout << "1. Penjumlahan\n";                     // Sesi 2 
        cout << "2. Pengurangan\n";                     // Sesi 2
        cout << "3. Dot Product\n";                     // Sesi 2
        cout << "4. Perkalian\n";                       // Sesi 2
        cout << "5. Transformasi Elementer\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        
        if (pilihan >= 1 && pilihan <= 6) {
            break;
        } else {
            cout << "Pilihan tidak valid." << endl;
            cout << endl;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << endl;

    return pilihan;
}

void vectorOperation(int pilih) {
    
    vector<int> vector1;
    vector<int> vector2;
    int num;

    if (isDummy) {
        // Membuat vektor dummy
        vector1 = {1, 2, 3};
        vector2 = {4, 5, 6};
    } else {
        int n = 3;

        cout << "Masukkan nilai untuk Vector 1: ";
        for (int i = 0; i < n; ++i) {
            cin >> num;
            vector1.push_back(num);
        }

        if (pilih != 5)
        {
            cout << "Masukkan nilai untuk Vector 2: ";
            for (int i = 0; i < n; ++i) {
                cin >> num;
                vector2.push_back(num);
            }
        }
        cout << endl;
    }

    cout << "Vector 1: ";
    displayVector(vector1);

    if (pilih != 5)
    {
        cout << "Vector 2: ";
        displayVector(vector2);
    }

    switch (pilih) {
        case 1:
            penjumlahanExt(vector1, vector2);
            break;
        case 2:
            penguranganExt(vector1, vector2);
            break;
        case 3:
            dotProductExt(vector1, vector2);
            break;
        case 4:
            perkalianExt(vector1, vector2);
            break;
        case 5:
            transformasiExt(vector1);
            break;
    }
}

int main() {
    int pilih = inputPilihan();

    vectorOperation(pilih);
    return 0;
}
