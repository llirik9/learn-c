#include <iostream>
#include <stdlib.h>

using namespace std;

int const n = 10;

int my_abs(int y) {
    if (y < 0) {
        return -y;
    }
    return y;
}

int main() {
    int a[n][n];
    int k = 0, x = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 90 + 10;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (
                (i == 0) 
                && (j == 0)
                && (a[i][j] < a[i+1][j]) 
                && (a[i][j] < a[i][j+1]) 
                && (a[i][j] < a[i+1][j+1])
            ) { k++; }
            else if (
                (i == n-1) 
                && (j == n-1)
                && (a[i][j] < a[i-1][j]) 
                && (a[i][j] < a[i][j-1]) 
                && (a[i][j] < a[i-1][j-1])
            ) { k++; }
            else if (
                (i == 0)
                && (j == n-1)
                && (a[i][j] < a[i+1][j-1])
                && (a[i][j] < a[i+1][j])
                && (a[i][j] < a[i][j-1])
            ) { k++; }
            else if (
                (j == 0)
                && (i == n-1)
                && (a[i][j] < a[i][j+1])
                && (a[i][j] < a[i-1][j])
                && (a[i][j] < a[i-1][j+1])
            ) { k++; }
            else if (
                (i == 0) 
                && (a[i][j] < a[i+1][j])
                && (a[i][j] < a[i][j+1])
                && (a[i][j] < a[i+1][j+1])
                && (a[i][j] < a[i][j-1])
                && (a[i][j] < a[i+1][j-1])
            ) { k++; }
            else if (
                (j == 0)
                && (a[i][j] < a[i+1][j]) 
                && (a[i][j] < a[i][j+1]) 
                && (a[i][j] < a[i+1][j+1]) 
                && (a[i][j] < a[i-1][j])
                && (a[i][j] < a[i-1][j+1])
            ) { k++; }
            else if (
                (i == n-1) 
                && (a[i][j] < a[i-1][j])
                && (a[i][j] < a[i][j+1])
                && (a[i][j] < a[i-1][j+1])
                && (a[i][j] < a[i][j-1])
                && (a[i][j] < a[i][j])
            ) { k++; }
            else if (
                (j == n-1)
                && (a[i][j] < a[i+1][j]) 
                && (a[i][j] < a[i][j-1]) 
                && (a[i][j] < a[i+1][j-1]) 
                && (a[i][j] < a[i-1][j])
                && (a[i][j] < a[i-1][j-1])
            ) { k++; }
            else if (
                (a[i][j] < a[i+1][j]) 
                && (a[i][j] < a[i][j-1]) 
                && (a[i][j] < a[i+1][j-1]) 
                && (a[i][j] < a[i][j+1]) 
                && (a[i][j] < a[i+1][j+1])
                && (a[i][j] < a[i-1][j-1])
                && (a[i][j] < a[i-1][j])
                && (a[i][j] < a[i-1][j+1])
            ) {k++}
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                x += my_abs(a[i][j]);
            }
        }
    }
    cout << endl; << "Answers: ";
    cout << k << endl;
    cout << x << endl;
    return 0;
}