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

void get_x_3(long long x[3], long long a[n][n], long long b[n], long long delta)
{
    for (int i = 0; i < 3; i++)
    {
        x[i] = get_x(a, b, delta, i);
    }
}

int main()
{
    long long a[n][n], b[n], c[n], d[m][m], e[5][5], x[n];
    init_arrays(a, b, d, e);
    cout << get_opr_matrix(e) << endl << endl;
    //get_x_3(x, a, b, get_opr_matrix(a));
    //cout << get_opr_matrix(d) << endl << endl;
    //multiply_array(a, x, c);
    //print_array(c);
    return 0;
}
