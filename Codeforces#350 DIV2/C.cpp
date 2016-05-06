/**
 *Codeforces Round #350 DIV2 C
 *06/05/16 00:30:15
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

const int N = 200005;
int aud[N];
int sub[N];
map<int, int>sci;

int main(int argc, char* args[])
{
    int n;
    scanf("%d", &n);
    int id;
    int tsum;
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &id);
        tsum = sci[id];
        sci[id] = ++tsum;
    }
    int m;
    scanf("%d", &m);
    int ans=1;
    int vp=0, as=0;
    for(int i=0; i<m; ++i)
    {
        scanf("%d", aud+i);
    }
    for(int i=0; i<m; ++i)
    {
        scanf("%d", sub+i);
    }
    int a, s;
    for(int i=0; i<m; ++i)
    {
        a = aud[i];
        s = sub[i];
        if(sci[a]>vp || (sci[a]==vp && sci[s]>as))
        {
            ans = i+1;
            vp = sci[a];
            as = sci[s];
        }
    }
    printf("%d\n", ans);
    return 0;
}
