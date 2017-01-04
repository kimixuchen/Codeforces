/*
CodeForces-Good Bye 2016-C-New Year and Rating
04/01/17 10:42:17
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

const int MAX1 = 0x3f3f3f3f;

int main()
{
    int n;
    int _min = -MAX1, _max = MAX1;
    int ci, di;
    
    scanf("%d", &n);
    

    bool possible = true;
    bool hasDiv2 = false;
    for(int i=0; i<n; ++i)
    {
        scanf("%d%d", &ci, &di);
        if(di==1)
        {
            if(_max < 1900)
            {
                possible = false;
                break;
            }
            _min = max(1900, _min);
            
            _min += ci;
            _max += ci;
        }
        else if(di==2)
        {
            hasDiv2 = true;
            if(_min >= 1900)
            {
                possible = false;
                break;
            }
            _max = min(_max, 1899);
            
            _min += ci;
            _max += ci;
        }
        //printf("min=%d  max=%d\n", _min, _max);
    }
    
    if(!possible)
        printf("Impossible\n");
    else if(!hasDiv2)
        printf("Infinity\n");
    else
        printf("%d\n", _max);

    return 0;
}
