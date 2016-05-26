/**
 *Codeforces Round #354 DIV2 C
 *26/05/16 14:20:18
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

const int N = 100005;
char a[N];
int counta[N], countb[N];

int n, k;

bool isok(int begin, int end, char rep)
{
    int count;
    if(rep=='a')
    {
        if(a[begin]==rep)
            count = counta[end]-counta[begin]+1;
        else
            count = counta[end]-counta[begin];
    }
    else
    {
        if(a[begin]==rep)
            count = countb[end]-countb[begin]+1;
        else
            count = countb[end]-countb[begin];
    }
    return count<=k;
}

int binarySearch(int l, int r, int rightPos, char rep)
{
    int curMax=0;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(isok(mid, rightPos, rep))
        {
            r = mid-1;
            curMax = rightPos-mid+1;
        }
        else
            l = mid+1;
    }
    return curMax;
}

int main(int argc, char* args[])
{
    scanf("%d %d", &n, &k);
    char buf[N];
    scanf("%s", buf);
    for(int i=1; i<=n; ++i)
    {
        a[i] = buf[i-1];
        if(a[i]=='a')
        {
            counta[i] = counta[i-1]+1;
            countb[i] = countb[i-1];
        }
        else
        {
            counta[i] = counta[i-1];
            countb[i] = countb[i-1]+1;
        }
    }

    int ans = k;
    for(int i=k+1; i<=n; ++i)
    {
        int maxa=0, maxb=0;
        maxa = binarySearch(1, i, i, 'a');
        maxb = binarySearch(1, i, i, 'b');
        ans = max(ans, maxa);
        ans = max(ans, maxb);
    }
    printf("%d\n", ans);

    return 0;
}
