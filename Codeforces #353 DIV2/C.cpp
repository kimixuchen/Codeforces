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
#include <stdlib.h>
#include <algorithm>
#include <queue>
using namespace std;

const int N = 100005;


map<long long, int> mp;

int main(int argc, char* args[])
{
    int n, num, res = 0;
    long long sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &num);
        sum += num;
        mp[sum]++;
        res = max(res, mp[sum]);
    }
    printf("%d\n", n-res);
    return 0;
}
