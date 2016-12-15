/*
CodeForces-Round 384-Div.2
14/12/16 22:24:05
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
    int n, a, b;
    string s;
    scanf("%d %d %d", &n, &a, &b);
    cin>>s;
    --a;
    --b;
    if(s[a]==s[b])
        printf("%d\n", 0);
    else
    {
        printf("%d\n", 1);
    }

    return 0;
}
