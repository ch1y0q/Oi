/*
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct mm{
    int start,end;
};

bool cmp(mm a,mm b);

int main()
{
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    int flag=0,a,b,c,d,cur;
    cin>>a>>b>>c>>d;
    mm hx[b];
    for(int i=0;i<b;i++)
    cin>>hx[i].start>>hx[i].end;
    //sort(hx,hx+b,cmp);
    for(int i=0;i<b;i++)
    {
        if(hx[i].start==c)
        {
            cur=hx[i].end;
            for(int j=i;j<b;j++)
            {
                if(hx[j].start==cur)
                {
                    cur=hx[j].end;
                    flag++;
                    break;
                }
            }
        }
        if(cur==d)
        {
            break;
            flag++;
        }
    }
    cout<<flag<<endl;
    return 0;
}
bool cmp(hx a,hx b)
{
    if a.start==b.start
        return a.end<b.end;
    else
        return a.start<b.start;
}
*/