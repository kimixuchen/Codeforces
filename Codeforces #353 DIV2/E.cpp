/**
 *Codeforces Round #353 DIV2 E
 *19/05/16 13:45:10
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

typedef pair<int, int> datatype;

const int N = 100005;

datatype tree[N*4];
int maxPos[N];
long long h[N];

void pushUp(int o)
{
    if(tree[o*2].second > tree[o*2+1].second)
        tree[o] = tree[o*2];
    else
        tree[o] = tree[o*2+1];
}

void buildTree(int o, int l, int r)
{
    if(l==r)
    {
        datatype d = make_pair(l, maxPos[l]);
        tree[o] = d;
    }
    else
    {
        int mid = (l+r)>>1;
        buildTree(o*2, l, mid);
        buildTree(o*2+1, mid+1, r);
        pushUp(o);
    }
}

datatype query(int a, int b, int l, int r, int o)
{
    if(a<=l && b>=r)
    {
        return tree[o];
    }
    int mid = (l+r)>>1;
    datatype p1=make_pair(-1, 0), p2=make_pair(-1, 0);
    if(a<=mid)
        p1 = query(a, b, l, mid, o*2);
    if(b>mid)
        p2 = query(a, b, mid+1, r, o*2+1);
    
    if(p1.second > p2.second)
        return p1;
    else
        return p2;
}

int main(int argc, char* args[])
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<n; ++i)
    {
        scanf("%d", maxPos+i);
    }
    maxPos[n] = n;
    buildTree(1, 1, n);
    
    long long ans = 0;
    for(int i=n-1; i>=1; --i)
    {
        int m;
        datatype p;
        p = query(i+1, maxPos[i], 1, n, 1);
        m = p.first;
        h[i] = h[m]+n+m-i-maxPos[i];
        ans += h[i];
    }
    printf("%I64d\n", ans);

    return 0;
}
