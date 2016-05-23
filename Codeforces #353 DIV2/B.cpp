/**
 *Codeforces Round #353 DIV2 B
 *18/05/16 07:44:53
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

int main(int argc, char* args[])
{
    int n, a, b, c, d;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    
    int x3, x4, x5;
    long long count = 0;
    for(int x=1; x<=n; ++x)
    {
        x3 = x+b-c;
        if(x3<1 || x3>n)
        {
            continue;
        }
        x4 = x+a-d;
        if(x4<1 || x4>n)
        {
            continue;
        }
        x5 = x+a+b-c-d;
        if(x5<1 || x5>n)
        {
            continue;
        }
        count += n;
    }
    printf("%lld\n", count);

    return 0;
}
