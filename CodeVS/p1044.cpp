#include <cstdio>
#include <iostream>
#include <cstring>

#define INF 2147483647 //最大int

using namespace std;

int dd[25],nmax,flag,dp[30],n=-1;

int main()
{
    freopen("data.in","r",stdin);
    while(scanf("%d",&dd[++n])==1){}
    
    for(int i=0;i<n;i++)
    {
        dp[i]=1;
        for(int j=0;j<i;j++)
            if(dd[j]>=dd[i])
                dp[i]=max(dp[i],dp[j]+1);
        nmax=max(nmax,dp[i]);
    }
    cout<<nmax<<" ";
    memset(dp,0,dp+30);
    for(int i=1;i<n;i++)
    return 0;
}