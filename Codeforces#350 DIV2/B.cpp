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

const int N = 100005;
int a[N];

int main(int argc, char* args[])
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; ++i)
        scanf("%d", a+i);
    int count=1;
    while(k>count)
    {
        k-=count;
        ++count;
    }
    printf("%d\n", a[k-1]);

    return 0;
}
