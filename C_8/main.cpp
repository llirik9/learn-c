#include <iostream>
#include <stdlib.h>
#include "my_lib.h"

using namespace std;

int const n = 3;

int get_opr_matrix_3_3(int a[3][3]) {
    return a[0][0] * a[1][1] * a[2][2] 
        + a[0][1] * a[1][2] * a[2][0] 
        + a[0][2] * a[1][0] * a[2][1]
        - a[0][2] * a[1][1] * a[2][0]
        - a[0][1] * a[1][0] * a[2][2] 
        - a[0][0] * a[1][2] * a[2][1];
}

int main()
{
    int a[n][n], b[n];
    add_array(a);
    add_array(b);
    print_array(a);
    print_array(b);
    cout << get_opr_matrix_3_3(a) << endl;
    return 0;
}