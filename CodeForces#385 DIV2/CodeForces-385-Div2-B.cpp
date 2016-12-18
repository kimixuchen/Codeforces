/*
CodeForces-385-Div2-B
18/12/16 09:26:28
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

int puzzle[MAX][MAX];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int leftupx=-1, leftupy=-1;
    int rightdownx=-1, rightdowny=-1;
    int count = 0;

    for(int i=0; i<n; ++i)
    {
        string s;
        cin>>s;
        for(int j=0; j<m; ++j)
        {
            if(s[j]=='X')
            {
                puzzle[i][j] = 1;
                ++count;
                if(leftupx==-1)
                {
                    leftupx = i;
                    leftupy = j;
                }
                rightdownx = i;
                rightdowny = j;
            }
        }
    }
    
    bool flag = true;
    if(count>0 && (rightdownx+1-leftupx)*(rightdowny+1-leftupy)==count)
    {
        for(int i=leftupx; i<=rightdownx; ++i)
        {
            for(int j = leftupy; j<=rightdowny; ++j)
            {
                if(puzzle[i][j]!=1)
                {
                    flag = false;
                    break;
                }
            }
            if(!flag)
                break;
        }
    }
    else
        flag = false;
    
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    

    

    return 0;
}
