#ifndef OPERASI_H
#define OPERASI_H

#include <vector>

using namespace std; 

void displayVector(const vector<int>& vec);

vector<int> addVectors(const vector<int>& vec1, const vector<int>& vec2);

vector<int> subtractVectors(const vector<int>& vec1, const vector<int>& vec2);

int dotProduct(const vector<int>& vec1, const vector<int>& vec2);

vector<int> multiplyElements(const vector<int>& vec1, const vector<int>& vec2);

vector<int> transformVector(const vector<int>& vec, int scalar);

#endif