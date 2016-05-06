/**
 *Codeforces Round #350 DIV2 A
 *05/05/16 23:40:03
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
    scanf("%d", &n);
    int a = n/7;
    int b = n%7;
    int mi=a*2, ma=a*2;
    if(b==1)
    {
        ++ma;
    }
    else if(b>1 && b<6)
    {
        ma+=2;
    }
    else if(b==6)
    {
        mi+=1;
        ma+=2;
    }
    printf("%d %d\n", mi, ma);

    return 0;
}
