/**
Codeforce-VK Cup 2016-Round 1
29/03/16 19:12:07
xuchen
**/
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <bitset>
using namespace std;

const int N = 150005;
const int K = 10;
int a[N];
int screen[K];

void resort(int pos, int v)
{
    screen[pos] = v;
    int t;
    for(int i=pos; i>0; --i)
    {
        if(a[screen[i-1]] < a[screen[i]])
        {
            t = screen[i-1];
            screen[i-1] = screen[i];
            screen[i] = t;
        }
        else
            break;
    }
}

bool contains(int pos, int v)
{
    bool flag = false;
    for(int i=0; i<=pos; ++i)
    {
        if(screen[i] == v)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    int n, k, q;
    int t, v;
    int pos = 0;
    int ssize;
    scanf("%d%d%d", &n, &k, &q);
    ssize = min(k, n);
    for(int i=1; i<=n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<q; ++i)
    {
        scanf("%d%d", &t, &v);
        if(t==1)
        {
            if(pos < ssize-1)
            {
                ++pos;
                resort(pos+1, v);
            }
            else
            {
                if(a[screen[pos]] < a[v])
                {
                    resort(pos, v);
                }
            }
        }
        else
        {
            if(contains(pos, v))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}
