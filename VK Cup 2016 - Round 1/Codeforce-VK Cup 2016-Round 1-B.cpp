/**
Codeforce-VK Cup 2016-Round 1-B
29/03/16 19:55:21
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

const int N = 100005;

int main()
{
    int n, d, h;
    scanf("%d%d%d", &n, &d, &h);
    int root = 1;
    int id = 1;
    if(h > d || h*2 < d)
    {
        printf("-1\n");
        return 0;
    }
    if(d==1 && n>2)
    {
        printf("-1\n");
        return 0;
    }
    if(h==d)
    {
        ++id;
        printf("%d %d\n", root, id);
        root = id;
        --h;
    }
    for(int i=0; i<h; ++i)
    {
        printf("%d %d\n", id, id+1);
        ++id;
    }
    ++id;
    if(id <= n)
        printf("%d %d\n", root, id);
    for(int i=1; i<d-h; ++i)
    {
        printf("%d %d\n", id, id+1);
        ++id;
    }
    ++id;
    while(id <= n)
    {
        printf("%d %d\n", root, id);
        ++id;
    }
    return 0;
}
