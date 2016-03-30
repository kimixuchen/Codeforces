/**
Codeforces #346 DIV2 A
2016-03-30 23:51:07
xuchen
**/
#include "stdio.h"
#include <cmath>
#include <algorithm>
#include <queue>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main()
{
    int n, a, b;
    int k;
    scanf("%d%d%d", &n, &a, &b);
    if(b >= 0)
    {
        k = (a-1+b)%n + 1;
    }
    else
    {
        int tmp = a-1+b;
        if(tmp >= 0)
        {
            k = tmp+1;
        }
        else
        {
            tmp %= n;
            k = (n+tmp)%n +1;
        }
    }
    printf("%d\n", k);

	return 0;
}
