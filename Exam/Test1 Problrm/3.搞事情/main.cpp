#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

struct stu
{
    int gra,num;
};

int cmp(stu x,stu y);

int main()
{
    vector <stu> exm;
    stu tmp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tmp.gra>>tmp.num;
        exm.push_back(tmp);
    }
    sort(exm.begin(),exm.end(),cmp);
    for(int i=0;i<n;i++)
        cout<<exm[i].gra<<" "<<exm[i].num<<endl;
    return 0;
}

int cmp(stu x,stu y)
{
    if(x.gra>y.gra)
        return 1;
    if(x.gra<y.gra)
        return 0;
    if(x.gra==y.gra)
    {
        if(x.num>y.num)
            return 1;
        else
            return 0;
    }
}
