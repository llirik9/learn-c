#include <iostream>
#include <stdlib.h>
using namespace std;

void add_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 90 + 10;
    }
}

int f1(int a[], int size) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (bool(a[i]%2)) {
            k++;
        }
    }
    return k;
}

void f2(int a[], int b[], int c[], int size) {
    int j = 0, k = 0;
    for (int i = 0; i < size; i++) {
        if (bool(a[i]%2)) {
            b[j] = a[i];
            j++;
        } else {
            c[k] = a[i];
            k++;
        }
    }
}

void print_array(int a[], int size) {
    for (int i = 0; i< size; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int n, *a, *b, *c;
    cin >> n;
    a = new int[n];
    add_array(a, n);
    print_array(a, n);
    int x = f1(a, n);
    b = new int[x];
    c = new int[n-x];
    f2(a, b, c, n);
    cout << endl;
    print_array(b, x);
    cout << endl;
    print_array(c, n-x);
    delete []a;
    delete []b; 
    delete []c;
    return 0;
}