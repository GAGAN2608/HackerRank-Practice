#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    while(scanf("%d",&t)&&t!=0)
    {
        int c=1,f=1,n;
        stack<int >side;
        for(int i=1; i<=t; i++)
        {
            scanf("%d",&n);
            if(n==c)
            {
                c++;
            }
            else
            {
                while(side.size()>0&&side.top()==c)
                {
                    side.pop();
                    c++;
                }
                side.push(n);
            }
        }
        while(side.size()>0)
        {
            if(side.top()!=c)
            {
                f=0;
                break;
            }
            else
            {
                c++;
            }
            side.pop();
        }
        if(f==1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

