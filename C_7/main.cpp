#include <iostream>
#include <stdlib.h>

using namespace std;

int const n = 5;

void add_array(int a[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 9 + 1;
        }
        
    }
}

void add_1_array(int a[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 1;
        }
        
    }
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

void pow_array(int a[n][n], int x)
{
    int b[n][n], c[n][n];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
            c[i][j] = a[i][j];
        }
    }
    while (x > 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[i][j] = c[i][j];
            }
        }x--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            a[i][j] = c[i][j];
        }
    }
}

int main()
{
    int a[n][n];
    add_array(a);
    print_array(a);
    pow_array(a, 3);
    cout << endl;
    print_array(a);
    return 0;
}