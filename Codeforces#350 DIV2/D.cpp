/**
 *Codeforces Round #350 DIV2 D
 *06/05/16 01:52:24
 *xuchen
 * */
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <map>
#include <stdlib.h>
#include <algorithm>
#include <queue>
using namespace std;

const int N = 100005;
int a[N];
int b[N];
int c[N];

int main(int argc, char* args[])
{
    int n;
    int k;
    int totalGram = 0, maxBase=0;
    scanf("%d %lld", &n, &k);
    for(int i=0; i<n; ++i)
    {
        scanf("%d", a+i);
        totalGram += a[i];
    }
    for(int i=0; i<n; ++i)
    {
        scanf("%d", b+i);
        c[i] = b[i]/a[i];
        maxBase = max(maxBase, c[i]);
    }
    int l = 0;
    int r = maxBase + k/totalGram + 1;
    int ans = 0;
    while(l <= r)
    {
        int m = l + (r-l >> 1);
        int cost = 0;
        for(int i=0; i<n; ++i)
        {
            if(m>c[i])
                cost += m*a[i]-b[i];
            if(cost > k)
            {
                break;
            }
        }
        if(cost <= k)
        {
            ans = m;
            l = m+1;
        }
        else
            r = m-1;
    }
    printf("%d\n", ans);

    return 0;
}
