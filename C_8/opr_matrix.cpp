#include <iostream>
#include <stdlib.h>
#include "my_lib.h"

using namespace std;

long long get_opr_matrix(long long a[1][1])
{
    return a[0][0];
}

long long get_opr_matrix(long long a[2][2])
{
    long long opr = 0;
    for (int i = 0; i < 2; i++)
    {
        long long b[1][1];
        for (int j = 0; j < 2; j++)
        {
            for (int k = 1; k < 2; k++)
            {
                if (j != i)
                {
                    if (j > i) {
                        b[k-1][j-1] = a[k][j];
                    }
                    else
                    {
                        b[k-1][j] = a[k][j];
                    }
                }
            }
        }
        opr += my_pow(-1, i) * a[0][i] * get_opr_matrix(b);
    }
    return opr;
}

long long get_opr_matrix(long long a[3][3])
{
    long long opr = 0;
    for (int i = 0; i < 3; i++)
    {
        long long b[2][2];
        for (int j = 0; j < 3; j++)
        {
            for (int k = 1; k < 3; k++)
            {
                if (j != i)
                {
                    if (j > i) {
                        b[k-1][j-1] = a[k][j];
                    }
                    else
                    {
                        b[k-1][j] = a[k][j];
                    }
                }
            }
        }
        opr += my_pow(-1, i) * a[0][i] * get_opr_matrix(b);
    }
    return opr;
}

long long get_opr_matrix(long long a[4][4])
{
    long long opr = 0;
    for (int i = 0; i < 4; i++)
    {
        long long b[3][3];
        for (int j = 0; j < 4; j++)
        {
            for (int k = 1; k < 4; k++)
            {
                if (j != i)
                {
                    if (j > i) {
                        b[k-1][j-1] = a[k][j];
                    }
                    else
                    {
                        b[k-1][j] = a[k][j];
                    }
                }
            }
        }
        opr += my_pow(-1, i) * a[0][i] * get_opr_matrix(b);
    }
    return opr;
}

long long get_opr_matrix(long long a[5][5])
{
    long long opr = 0;
    for (int i = 0; i < 5; i++)
    {
        long long b[4][4];
        for (int j = 0; j < 5; j++)
        {
            for (int k = 1; k < 5; k++)
            {
                if (j != i)
                {
                    if (j > i) {
                        b[k-1][j-1] = a[k][j];
                    }
                    else
                    {
                        b[k-1][j] = a[k][j];
                    }
                }
            }
        }
        opr += my_pow(-1, i) * a[0][i] * get_opr_matrix(b);
    }
    return opr;
}
