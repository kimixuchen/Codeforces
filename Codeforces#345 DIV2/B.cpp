/**
 * Codeforces Round #345 Div.2
 * B
 * 08/03/16 09:11:30
 * xuchen
**/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
#include <stack>
using namespace std;

const int N = 1005;
int exists[N];

int main()
{
    int n, t;
    int num=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &t);
        num = max(num, ++exists[t]);
    }
    printf("%d\n", n-num);

    return 0;
}

