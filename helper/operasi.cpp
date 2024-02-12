#include <iostream>
#include <vector>
#include "operasi.h"

using namespace std;

// Fungsi untuk menampilkan vektor
void displayVector(const vector<int>& vec) {
    cout << "[ ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << "]" << endl;
}

// Fungsi untuk melakukan penjumlahan vektor
vector<int> addVectors(const vector<int>& vec1, const vector<int>& vec2) {
    vector<int> result;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result.push_back(vec1[i] + vec2[i]);
    }
    return result;
}

// Fungsi untuk melakukan pengurangan vektor
vector<int> subtractVectors(const vector<int>& vec1, const vector<int>& vec2) {
    vector<int> result;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result.push_back(vec1[i] - vec2[i]);
    }
    return result;
}

// Fungsi untuk melakukan perkalian dot product vektor
int dotProduct(const vector<int>& vec1, const vector<int>& vec2) {
    // v ⋅ w = a⋅d + b⋅e + c⋅f
    // v ⋅ w = 1⋅4 + 2⋅5 + 3⋅6 = 4 + 10 + 18 = 32
    int result = 0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}
    
// Fungsi untuk melakukan perkalian elemen vektor
vector<int> multiplyElements(const vector<int>& vec1, const vector<int>& vec2) {
    // v × w = (b⋅f − c⋅e, c⋅d − a⋅f, a⋅e − b⋅d)
    // v × w = (2⋅6 − 3⋅5, 3⋅4 − 1⋅6, 1⋅5 − 2⋅4) = (−3, 6, −3)
    vector<int> result;
    result.push_back(vec1[1] * vec2[2] - vec1[2] * vec2[1]);
    result.push_back(vec1[2] * vec2[0] - vec1[0] * vec2[2]);
    result.push_back(vec1[0] * vec2[1] - vec1[1] * vec2[0]);
    return result;
}

// Fungsi untuk melakukan transformasi elemen vektor
vector<int> transformVector(const vector<int>& vec, int scalar) {
    vector<int> result;
    for (int num : vec) {
        result.push_back(num * scalar);
    }
    return result;
}