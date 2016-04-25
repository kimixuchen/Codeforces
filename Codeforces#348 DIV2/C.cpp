/**
 *Codeforces Round #348 C
 *25/04/16 00:14:03
 *xuchen
 * */
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 105;
const int M = 10005;
const int DEFAULT = 0;

int matrix[N][N];
int op[M][4];
int n, m;
int q;

void shiftRow(int row)
{
    int t = matrix[row][m-1];
    for(int i=m-1; i>0; --i)
    {
        matrix[row][i] = matrix[row][i-1];
    }
    matrix[row][0] = t;
}
void shiftCol(int col)
{
    int t = matrix[n-1][col];
    for(int i=n-1; i>0; --i)
    {
        matrix[i][col] = matrix[i-1][col];
    }
    matrix[0][col] = t;
}

int main(int argc, char* args[])
{
    scanf("%d %d %d", &n, &m, &q);
    int t;
    for(int i=0; i<q; ++i)
    {
        scanf("%d", &t);
        op[i][0] = t;
        if(t==3)
        {
            scanf("%d %d %d", op[i]+1, op[i]+2, op[i]+3);
        }
        else
        {
            scanf("%d", op[i]+1);
        }
    }
    
    for(int i=q-1; i>=0; --i)
    {
        if(op[i][0]==3)
        {
            matrix[op[i][1]-1][op[i][2]-1] = op[i][3];
        }
        else if(op[i][0]==1)
        {
            shiftRow(op[i][1]-1);    
        }
        else
        {
            shiftCol(op[i][1]-1);
        }
    }
    
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
