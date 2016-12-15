/*
CodeForces-Round 384-Div.2-C
14/12/16 23:17:13
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


int main()
{
    int n;
    scanf("%d", &n);
    if(n==1)
        printf("-1\n");
    else
    {
        printf("%d %d %d\n", n, n+1, n*(n+1));
    }

    return 0;
}
