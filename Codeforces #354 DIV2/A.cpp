/**
 *Codeforces Round #354 DIV2 A
 *25/05/16 22:56:39
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


int main(int argc, char* args[])
{
    int n;
    scanf("%d", &n);
    int minPos, maxPos;
    int t;
    for(int i=1; i<=n; ++i)
    {
        scanf("%d", &t);
        if(t==1)
            minPos = i;
        else if(t==n)
            maxPos = i;
    }
    
    printf("%d\n",max(max(n-minPos, n-maxPos), max(minPos-1, maxPos-1)));

    return 0;
}
