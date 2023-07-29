#include <iostream>
#include <stdlib.h>
#include "my_lib.h"

using namespace std;

int const n = 3;

double get_opr_matrix_3_3(double a[3][3]) {
    return a[0][0] * a[1][1] * a[2][2] 
        + a[0][1] * a[1][2] * a[2][0] 
        + a[0][2] * a[1][0] * a[2][1]
        - a[0][2] * a[1][1] * a[2][0]
        - a[0][1] * a[1][0] * a[2][2] 
        - a[0][0] * a[1][2] * a[2][1];
}

double get_x(double a[n][n], double b[n], double delta, int x)
{
    double c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (double(j) == x) 
            {
                c[i][j] = b[i];
            }
            else
            {
                c[i][j] = a[i][j];
            }
        }
    }
    double new_delta = get_opr_matrix_3_3(c);
    return (new_delta / delta);
}

int main()
{
    double a[n][n], b[n], delta, x_1, x_2, x_3;
    add_array(a);
    add_array(b);
    print_array(a);
    print_array(b);
    delta = get_opr_matrix_3_3(a);
    cout << endl;
    x_1 = get_x(a, b, delta, 0);
    x_2 = get_x(a, b, delta, 1);
    x_3 = get_x(a, b, delta, 2);
    double x[n] = { x_1, x_2, x_3 };
    double c[n];
    cout << endl;
    multiply_array(a, x, c);
    print_array(c);
    return 0;
}