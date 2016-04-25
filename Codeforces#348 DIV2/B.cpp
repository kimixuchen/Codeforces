/**
 *Codeforces Round #348 B
 *25/04/16 00:14:03
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

const int N = 100005;
bool visit[N];
int dir[N];             /* >:1  <:-1 */
int step[N];

int n;

bool isOk(int x)
{
    return x>=0 && x<n;
}

int main(int argc, char* args[])
{
    char s[N];
    scanf("%d", &n);
    scanf("%s", s);
    for(int i=0; i<n; ++i)
    {
        if(s[i]=='>')
            dir[i] = 1;
        else
            dir[i] = -1;
    }
    for(int i=0; i<n; ++i)
        scanf("%d", step+i);
    
    int cur = 0;
    int next;
    bool infinite = true;
    while(!visit[cur])
    {
        visit[cur] = true;
        next = cur + dir[cur]*step[cur];
        if(!isOk(next))
        {
            infinite = false;
            break;
        }
        cur = next;
    }
    if(infinite)
        printf("INFINITE\n");
    else
        printf("FINITE\n");

    return 0;
}
