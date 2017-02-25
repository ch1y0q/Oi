#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    int fuck=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<fuck;i++)
            cout<<"*";
        cout<<endl;
        fuck+=2;
    }
    fuck-=4;
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<fuck;i++)
            cout<<"*";
        cout<<endl;
        fuck-=2;
    }
    return 0;
}
