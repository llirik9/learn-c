#include <iostream>
#include <stdlib.h>

using namespace std;

int const n = 3;

void multiply_array(double a[n][n], double b[n], double c[n])
{
    for (int i = 0; i < n; i++) 
    {
        c[i] = 0;
        for (int j = 0; j < n; j++) 
        {
            c[i] += a[i][j] * b[j];
        }
    }
}

void add_array(double a[n])
{
    for (int i = 0; i < n; i++)
    {
        a[i] = double(rand() % 90 + 10);
    }
}

void add_array(double a[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = double(rand() % 90 + 10);
        }        
    }
}

void print_array(double a[n]) {
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

void print_array(double a[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
