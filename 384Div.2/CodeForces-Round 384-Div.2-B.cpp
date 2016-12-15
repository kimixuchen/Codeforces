/*
CodeForces-Round 384-Div.2-B
14/12/16 22:50:37
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

const int MAX = 0x3f3f3f3f;

int search(int n, long long k)
{
    //printf("%d %lld\n", n, k);
    long long sum = pow(2, n+1)-1;
    if(k<sum/2+1)
    {
        return search(n-1, k);
    }
    else if(k>sum/2+1)
    {
        return search(n-1, k-sum/2-1);
    }
    else
    {
        return n+1;
    }
}

int main()
{
    int n;
    long long k;
    cin>>n>>k;
    
    int ans = search(n, k);
    
    printf("%d\n", ans);

    return 0;
}
