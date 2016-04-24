/**
 *Codeforces Educational Round 12 D
 *24/04/16 13:56:03
 *xuchen
 * */
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 10000005;
bool prime[N];
int a[1005];
void init()
{
    prime[1] = true;
    for(int i=2; i<N; ++i)
    {
        if(!prime[i])
        {
            for(int j=i*2; j<N; j+=i)
            {
                prime[j] = true;
            }
        }
    }
}

int main(int argc, char* args[])
{
    int n;
    int cnt=0, ans;
    init();
    scanf("%d", &n);
    for(int i=0; i<n; ++i)
    {
        scanf("%d", a+i);
    }
    for(int i=0; i<n; ++i)
    {
        if(a[i]==1)
            ++cnt;
    }

    if(cnt > 1)
    {
        ans = cnt;
        int t=0;
        for(int i=0; i<n; ++i)
        {
            if(a[i]!=1 && !prime[a[i]+1])
            {
                ans++;
                t = a[i];
                break;
            }
        }
        printf("%d\n", ans);
        for(int i=0; i<cnt; ++i)
        {
            printf("1 ");
        }
        if(t>0)
            printf("%d\n", t);
        else
            printf("\n");
    }
    else
    {
        for(int i=0; i<n; ++i)
        {
            for(int j=i+1; j<n; ++j)
            {
                if(!prime[a[i]+a[j]])
                {
                    printf("2\n%d %d\n", a[i], a[j]);
                    return 0;
                }
            }
        }
        printf("1\n%d\n", a[0]);
    }
    return 0;
}
