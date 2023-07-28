#include <iostream>
#include <stdlib.h>

using namespace std;

int const n = 3;

void add_array(int a[n])
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 90 + 10;
    }
}

void add_array(int a[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 90 + 10;
        }        
    }
}

void print_array(int a[n]) {
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

void print_array(int a[n][n])
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
