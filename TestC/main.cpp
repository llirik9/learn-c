#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int const n = 6;

void add_array(int a[n])
{
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 90 + 10;
    }
}

void cout_array(int *a, int k)
{
    for (int i = 0; i < k; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

bool check_sort(int a[n])
{
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i + 1]) {
            return true;
        }
    }
    return false;
}

void buble(int a[n])
{
    int x;
    int c = 0;
    while (check_sort(a)) {
        c++;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                x = a[i];
                a[i] = a[i + 1];
                a[i + 1] = x;
            }
        }
    }
    cout << c << endl << endl;
}

void min_sort(int a[n])
{
    int x;
    int i = 0, c = 0;
    while (check_sort(a)) {
        for (int j = i; j < n; j++) {
            if (a[i] > a[j]) {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
        i++; c++;
    }
    cout << c << endl << endl;
}

void sort_insert(int a[n])
{
    int j, k;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        k = a[i];
        while ((a[j] > k) && (j >= 0)) 
        {
            a[j+1] = a[j]; j--;
        }
        a[j+1] = k;
    }
}

void gnome_sort(int a[n])
{
    int x, i = 1, j = 1;
    while (i < n) 
    {
        if (a[i] < a[i - 1]) {
            x = a[i];
            a[i] = a[i - 1];
            a[i -1] = x; i--; 
            if (i == 0) {
                i = j; j++;
            }
        }
        else {
            i = j; j++;
        }
    }
}

void sort_y(int a[n]) {
    int j = 0, k = 0;

    while (check_sort(a)) {
        int m = 3, *b, *c;
        b = new int[m];
        c = new int[m];
        
        for (int i = 0; i < m; i++) 
        {
            b[i] = a[i];
        }
    
        for (int i = m; i < n; i++) 
        {
            c[i-m] = a[i];
        }

        cout_array(b, m);
        cout_array(c, m);

        for (int i = 0; i < n; i++)
        {
            if ((j == m) && (k == m)) {
                break;
            }
            else if (j == m) {
                a[i] = c[k];
                k++;
            }
            else if (k == m) {
                a[i] = b[j];
                j++;
            }
            else if (b[j] < c[k]) {
                cout << b[j] << " " << c[k] << endl;
                a[i] = b[j];
                j++;
            }
            else {
                cout << b[j] << " " << c[k] << endl;
                a[i] = c[k];
                k++;
            }
        }

        cout_array(a, n);
        
        delete []b;
        delete []c;
    }
}

void my_sort(int a[n]) 
{
    // sort_y(a);
    // sort_insert(a);
    gnome_sort(a);
    // min_sort(a);
    // buble(a);
}

int main()
{
    srand(time(NULL));
    int a[n];
    add_array(a);
    cout_array(a, n);
    my_sort(a);
    cout_array(a, n);
    //system("pause");
    return 0;
}
