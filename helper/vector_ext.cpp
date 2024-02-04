#include <iostream>
#include <vector>
#include "operasi.h"

using namespace std;

void penjumlahanExt(const vector<int>& vector1, const vector<int>& vector2) {
    // Melakukan penjumlahan vektor
    vector<int> sum = addVectors(vector1, vector2);
    cout << "Sum: ";
    displayVector(sum);
}

void penguranganExt(const vector<int>& vector1, const vector<int>& vector2) {
    // Melakukan pengurangan vektor
    vector<int> difference = subtractVectors(vector1, vector2);
    cout << "Difference: ";
    displayVector(difference);
}

void dotProductExt(const vector<int>& vector1, const vector<int>& vector2) {
    // Melakukan dot product vektor
    int dot = dotProduct(vector1, vector2);
    cout << "Dot Product: " << dot << endl;
}

void perkalianExt(const vector<int>& vector1, const vector<int>& vector2) {
    // Melakukan perkalian elemen vektor
    vector<int> product = multiplyElements(vector1, vector2);
    cout << "Element-wise Product: ";
    displayVector(product);
}

void transformasiExt(const vector<int>& vector1) {
    // Melakukan transformasi elemen vektor
    int scalar = 2;
    vector<int> transformed = transformVector(vector1, scalar);
    cout << "Transformed Vector 1 (scaled by " << scalar << "): ";
    displayVector(transformed);
}