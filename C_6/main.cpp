#include <iostream>
#include <stdlib.h>

using namespace std;

int const n = 3;
int const m = 4;
int const l = 5;

int main() {
    int a[n][m], b[m][l], c[n][l];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 90 + 10;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            b[i][j] = rand() % 90 + 10;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}