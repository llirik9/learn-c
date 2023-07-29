#include <iostream>
#include <stdlib.h>

using namespace std;

int const n = 3;
int const m = 4;

void multiply_array(long long a[n][n], long long b[n], long long c[n])
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

int my_pow(int a, int x)
{
    int answer = 1;
    for (int i = 0; i < x; i++)
    {
        answer *= a;
    }
    return answer;
}

void add_array(long long a[n])
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 90 + 10;
    }
}

void add_array(long long a[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 90 + 10;
        }
    }
}

void add_array(long long a[m][m])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 90 + 10;
        }
    }
}

void add_array(long long a[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = rand() % 90 + 10;
        }
    }
}

void print_array(long long a[n]) {
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl << endl;
}

void print_array(long long a[n][n])
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

void print_array(long long a[m][m])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void print_array(long long a[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
#include <iostream>
