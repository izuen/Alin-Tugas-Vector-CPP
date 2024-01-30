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
    int result = 0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}

// Fungsi untuk melakukan perkalian elemen vektor
vector<int> multiplyElements(const vector<int>& vec1, const vector<int>& vec2) {
    vector<int> result;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result.push_back(vec1[i] * vec2[i]);
    }
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