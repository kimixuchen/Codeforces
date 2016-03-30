/**
Codeforces #346 DIV2 C
2016-03-31 00:39:41
xuchen
**/
#include "stdio.h"
#include <cmath>
#include <algorithm>
#include <queue>
#include <stdlib.h>
#include <cstring>
#include <set>
using namespace std;

set<int> has;
queue<int> ans;
int main()
{
    int n, m;
    int t;
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &t);
        has.insert(t);
    }
    int sum = 0;
    int c = 0;
    for(int i=1; i<1000000000; ++i)
    {
        if(has.count(i) > 0)
            continue;
        if(sum+i > m)
            break;
        sum+=i;
        ans.push(i);
        c++;
    }
    printf("%d\n", c);
    while(!ans.empty())
    {
        printf("%d ", ans.front());
        ans.pop();
    }
    printf("\n");
	return 0;
}
