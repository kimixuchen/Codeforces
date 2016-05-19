/**
 *Codeforces Round #353 DIV2 A
 *18/05/16 07:20:03
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

int main(int argc, char* args[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int gap = b-a;
    if(gap==0)
    {
        printf("YES\n");
    }
    else if((gap>0 && c>0) || gap<0 && c<0)
    {
        if(gap%c == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
