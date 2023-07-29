#include <iostream>
#include <stdlib.h>
#include "my_lib.h"
#include "opr_matrix.h"

using namespace std;

int const n = 3;
int const m = 4;

void init_arrays(long long a[n][n], long long b[n], long long d[m][m], long long e[5][5])
{
    add_array(a);
    add_array(b);
    add_array(d);
    add_array(e);
    //print_array(a);
    //print_array(b);
    //print_array(d);
    print_array(e);
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

int get_opr_matrix_3_3(int a[3][3]) {
    return a[0][0] * a[1][1] * a[2][2]
        + a[0][1] * a[1][2] * a[2][0]
        + a[0][2] * a[1][0] * a[2][1]
        - a[0][2] * a[1][1] * a[2][0]
        - a[0][1] * a[1][0] * a[2][2]
        - a[0][0] * a[1][2] * a[2][1];
}

long long get_x(long long a[n][n], long long b[n], long long delta, int x)
{
    long long c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == x) 
            {
                c[i][j] = b[i];
            }
            else
            {
                c[i][j] = a[i][j];
            }
        }
    }
    long long new_delta = get_opr_matrix(c);
    return (new_delta / delta);
}

int main()
{
    long long a[n][n], b[n], c[n], d[m][m], e[5][5];
    add_array(a);
    print_array(a);
    cout << get_opr_matrix(a) << endl;
    return 0;
}
