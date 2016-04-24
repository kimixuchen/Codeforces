/**
 *Codeforces Educational Round 12 B
 *24/04/16 10:02:23
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

const int N = 20005;

int main(int argc, char* args[])
{
    string s;
    cin>>s;
    for(int i=1; i<s.length(); ++i)
    {
        if(s[i]==s[i-1])
        {
            for(char c = 'a'; c<='z'; ++c)
            {
                if(c!=s[i-1]&& c!=s[i+1])
                {
                    s[i] = c;
                    break;
                }
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
