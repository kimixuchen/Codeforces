/**
 * Codeforces-#333 DIV2-B
 * 2015-11-22 14:02:03
 * xuchen
**/
/**
 *Method 1.
**/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

const int N = 100005;
int a[N];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    int k=0, minpos=0, maxpos=0, res=1;
    for(int i=0; i<n; i++)
    {
        if(a[i]<=a[minpos])
            minpos = i;
        if(a[i]>=a[maxpos])
            maxpos = i;
        if(a[maxpos]-a[minpos]>1)
        {
            while(minpos<maxpos && a[maxpos]-a[minpos]>1)
                minpos++;
            while(maxpos<minpos && a[maxpos]-a[minpos]>1)
                maxpos++;
            k = min(maxpos, minpos);
        }
        res = max(res, i-k+1);
    }
    printf("%d\n", res);
	return 0;

}
