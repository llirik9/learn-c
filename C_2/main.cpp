#include <iostream>
#include <stdlib.h>
using namespace std;

void add_array(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 90 + 10;
    }
}

void cout_array(int a[], int n)
{
    for (int i = 0; i< n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

bool check_sort(int a[], int low, int hight) {
    for (int i = low; i < hight-1; i++) {
        if (a[i] > a[i+1]) { return true; } 
    }
    return false;
}

void quick_sort(int a[], int low, int hight) {
    int pivot = a[int((low + hight)/2)];
    int i = low, j = hight-1;
    do {
        while (a[i] < pivot) { i++; }
        while (a[j] > pivot) { j--; }
        if (i<=j) {
            int y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;j--;
        }
    } while (i <= j);
    if (low < i-1) {
        quick_sort(a, low, i-1);
    }
    if (i < hight-2) {
        quick_sort(a, i, hight);
    }
}

void my_sort(int a[], int low, int higth) {
    int k = 0;
    while(check_sort(a,low, higth)) {
        quick_sort(a, low, higth); k++;
        //cout_array(a, higth);
        //cout << endl;
    }
    cout << endl << k << endl;
}

int main()
{
    int x = 20;
    int a[x];
    add_array(a, x);
    cout_array(a, x);
    cout << endl;
    my_sort(a, 0, x);
    cout_array(a, x);
    cout << endl;
    return 0;
}