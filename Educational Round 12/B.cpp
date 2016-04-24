/**
 *Codeforces Educational Round 12 B
 *24/04/16 10:02:23
 *xuchen
 * */
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 105;

int main(int argc, char* args[])
{
    int n, m, k;
    int pos[N];
    int ans = 0;
    scanf("%d%d%d", &n, &m, &k);
    int item;
    
    for(int i=0; i<k; ++i)
    {
        scanf("%d", &item);
        pos[i] = item;
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            scanf("%d", &item);
            int step = 1;
            int tmp = item;
            int curpos = 0;
            while(pos[curpos]!=item)
            {
                ++step;
                int t = tmp;
                tmp = pos[curpos];
                pos[curpos] = t;
                ++curpos;
            }
            pos[curpos] = tmp;
            ans += step;
        }
    }
    printf("%d\n", ans);

    return 0;
}
