/**
 *Codeforces Round #348 A
 *25/04/16 00:14:03
 *xuchen
 * */
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

int main(int argc, char* args[])
{
    int n;
    int ans;
    scanf("%d", &n);
    ans = 2*(n/3);
    if(n%3 > 0)
        ++ans;
    printf("%d\n", ans);

    return 0;
}
