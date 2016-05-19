/**
 *Codeforces Round #353 DIV2 B
 *18/05/16 07:44:53
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

set<int> valset;
map<int, int> L, R;

int main(int argc, char* args[])
{
    int n, val;
    scanf("%d", &n);
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &val);
        if(i==0)
            valset.insert(val);
        else
        {
            auto iter = valset.lower_bound(val);
            if(iter == valset.end())
                R[*(--iter)] = val;
            else
            {
                if(!L[*iter]) L[*iter] = val;
                else R[*(--iter)] = val;
            }
            if(i==1)
                printf("%d", *iter);
            else
                printf(" %d", *iter);
            valset.insert(val);
        }
    }
    return 0;
}
