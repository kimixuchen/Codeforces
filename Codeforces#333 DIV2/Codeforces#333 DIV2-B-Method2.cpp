/**
 * Codeforces-#333 DIV2-B
 * 2015-11-22 14:02:03
 * xuchen
**/
/**
 * Method 2.
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

    for(int i=1; i<n; i++)
        a[i-1] = a[i]-a[i-1];

    int k=0, l=0, j=0, res=1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==0)
        {

        }
        else if(a[i] != k)
        {
            k = a[i];
            j = i;
        }
        else if(a[i] == k)
        {
            res = max(res, i-l+1);
            l = j+1;
            j = i; 
        }
    }
    res = max(res, n-l);
    printf("%d\n", res);
	return 0;

}
