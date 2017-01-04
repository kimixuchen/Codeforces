/*
CodeForces-Good Bye 2016-A-New Year and Hurry
04/01/17 09:25:54
xuchen
**/

#include <iostream>
#include <sstream>
#include <cfloat>
#include <cctype>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <cmath>
#include <vector>
#include <map>
#include <cmath>
#include <string>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <bitset>
#include <cstdlib>

using namespace std;

const int MAX = 505;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    int ret = 0;
    int ptime = 0;
    for(int i=1; i<=n; ++i)
    {
        ptime += i*5;
        if(ptime+k <= 240)
        {
            ++ret;
        }
        else
        {
            break;
        }
    }
    
    printf("%d\n", ret);

    return 0;
}
