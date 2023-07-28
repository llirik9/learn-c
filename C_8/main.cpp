#include <iostream>
#include <stdlib.h>

using namespace std;

int const n = 3;

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

int main()
{
    int a[n][n];
    add_array(a);
    print_array(a);
    cout << get_opr_matrix_3_3(a) << endl;
    return 0;
}