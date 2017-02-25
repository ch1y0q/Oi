#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int a[99999];

void shift(int i,int bj);

int main()
{
    freopen("data.out","w",stdout);
    int n;
    scanf("%d",&n);
    srand(time(NULL));
    for(int i=0;i<=n;i++)
        a[i]=rand();
    for(int i=0;i<=n;i++)
        shift(i,n);
    for(int i=0;i<=n-1;i++)
    {
        swap(a[i],a[n]);
        shift(1,i-1);
    }
    for(int i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}

void shift(int i,int bj)
{
    while(2*i<=bj)
    {
        i+=i;
        if(i+1<=bj && a[i+1]<a[i])
            i++;
        if(a[i]<a[i/2])
            swap(a[i],a[i/2]);
        else
            break;
    }
}
