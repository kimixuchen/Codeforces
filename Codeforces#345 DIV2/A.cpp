/**
 * Codeforces Round #345 Div.2
 * 07/03/16 18:44:32
 * xuchen
**/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
#include <stack>
using namespace std;


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(max(a, b) <= 1)
    {
        printf("%ld\n", 0);
        return 0;
    }
    long time = 0;
    int tmp;
    while(max(a, b) > 2)
    {
        if(a > b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        if(b%2 == 0)
        {
            time += b/2 - 1;
            a += b/2 - 1;
            b = 2;
        }
        else
        {
            time += b/2;
            a += b/2;
            b = 1;
        }
    }
    ++time;
    printf("%ld\n", time);

    return 0;
}

