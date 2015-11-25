/**
 * Codeforces-#333 DIV2-C
 * 2015-11-22 14:02:03
 * xuchen
**/
/**
 * The condition that the train and bus can't meet at one vertex except the final one is just trolling.
 * If there's a railway 1-N, then the train can take it and wait in town N. If there's no such railway,
 * then there's a road 1-N, the bus can take it and wait in N instead. There's nothing forbidding this.
 * :D.
**/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
using namespace std;

const int N = 405;

int map[N][N], dis[N], v[N];
queue<int> q;
int main()
{
    int n, m, from, to;
    scanf("%d%d", &n, &m);
    for(int i=0; i<m; i++)
    {
        scanf("%d%d", &from, &to);
        map[from][to] = 1;
        map[to][from] = 1;
    }
    int flag;   //flag=1:train straight to N, flag=0:car straight to N
    if(map[1][n]==1)
        flag = 0;
    else
        flag = 1;

    memset(dis, -1, sizeof(dis));
    dis[1] = 0; 
    v[1] = true;
    q.push(1);
    int cur;
    while(!q.empty())
    {
        cur = q.front();
        q.pop();
        if(cur == n)
            break;
        for(int i=1; i<=n; i++)
        {
            if(map[cur][i]==flag && !v[i])
            {
                q.push(i);
                v[i] = true;
                dis[i] = dis[cur]+1;
            } 
        }
    }
    printf("%d\n", dis[n]);    
	return 0;
}
