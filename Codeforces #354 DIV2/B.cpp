/**
 *Codeforces Round #354 DIV2 B
 *25/05/16 23:14:58
 *xuchen
 * */
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <stdlib.h>
#include <algorithm>
#include <queue>
using namespace std;

const int N = 15;
double g[N][N];

int main(int argc, char* args[])
{
    int n, t;
    scanf("%d %d", &n, &t);
    g[1][1] = t;
    int ans=0;

    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            if(g[i][j]>=1)
            {
                g[i+1][j] += (g[i][j]-1)/2;
                g[i+1][j+1] += (g[i][j]-1)/2;
                ans += 1;
            }
        }
    }
    printf("%d\n", ans);

    return 0;
}
