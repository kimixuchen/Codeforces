/**
 *Codeforces Educational Round 12 A
 *24/04/16 09:36:15
 *xuchen
 * */
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;


int main(int argc, char* args[])
{
    int a, ta, b, tb;
    int sh, sm;
    scanf("%d%d", &a, &ta);
    scanf("%d%d", &b, &tb);
    scanf("%d:%d", &sh, &sm);
    int start = sh*60+sm;
    int reach = start+ta;
    int ans = 0;
    for(int i=300; i<1440; i+=b)
    {
        if(i+tb>start && i<reach)
            ++ans;
    }
    printf("%d\n", ans);

    return 0;
}
