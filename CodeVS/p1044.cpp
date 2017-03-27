#include <cstdio>
#include <iostream>

#define INF 2147483647 //最大int

using namespace std;

int dd[25],nmax,nmin,flag1=1,flag2=1,height[30001],dp[30],n=-1;

int lj(int n);
int xt(int n);

int main()
{
    freopen("data.in","r",stdin);
    while(scanf("%d",&dd[++n])==1){}
    
    printf("%d %d",lj(n),xt(n));
    return 0;
}

int lj(int n)
{
    for (int i = 0; i < n; i++) 
    {
		int nmax;
        dp[i] = 1;
        for(int j=0;j<i;j++)
            if(dd[j]>dd[i])
                dp[i]=max(dp[i],dp[j]+1);
	}
    return nmax;
}

int xt(int n)
{
    cout<<"cat";
}