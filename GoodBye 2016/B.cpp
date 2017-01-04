/*
CodeForces-Good Bye 2016-B-New Year and North Pole
04/01/17 09:34:59
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
    int n;
    scanf("%d", &n);
    
    int t;
    string dir;
    int disToNP = 0;
    const int DIS_MAX = 20000;
    bool flag = true;
    
    for(int i=0; i<n; ++i)
    {
        cin>>t>>dir;
        if(dir=="East" || dir=="West")
        {
            if(disToNP==0 || disToNP==DIS_MAX)
            {
                flag = false;
                break;
            }
        }
        else if(dir=="South")
        {
            if(disToNP==DIS_MAX)
            {
                flag = false;
                break;
            }
            disToNP += t;
        }
        else if(dir=="North")
        {
            if(disToNP==0)
            {
                flag = false;
                break;
            }
            disToNP -= t;
        }
        if(disToNP<0 || disToNP>DIS_MAX)
            flag = false;
    }
    if(disToNP != 0)
        flag = false;
    
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
