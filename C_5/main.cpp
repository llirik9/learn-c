#include <iostream>
#include <stdlib.h>

using namespace std;
int const n = 3;
int const m = 3;

void print_duble_array(int a[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int a[n][m], b[n][m], c[n][m], alpha, beta;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 90 + 10;
            b[i][j] = rand() % 90 + 10;
        }
    }
    print_duble_array(a);
    print_duble_array(b);
    cout << endl << "alpha: "; cin >> alpha;
    cout << "beta: "; cin >> beta;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] *= alpha;
            b[i][j] *= beta;
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    print_duble_array(a);
    print_duble_array(b);
    print_duble_array(c);
    return 0;
}