#include <bits/stdc++.h>
#define Maxn 21

using namespace std;

char pic[Maxn][Maxn];
int m,n,idx[Maxn][Maxn],cnt;

void dfs(int i,j);

int main()
{
    while(scanf("%d%d",m,n)==2 && m!=0 && n!=0 )
    {
        for(int i=0;i<m;i++)
            scanf("%s",pic[i]);
        cnt=0;
        memset(idx,0,sizeof(idx));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(pic[i][j]=='@')
                    dfs(i,j);
    }
    return 0;
}