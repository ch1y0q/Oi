#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()

{
    int s=0,max=0;
    char a[1001];
    gets(a);
    int l=strlen(a);
    for(int i=0; i<l; i++)
    {
        if(a[i]=='K')
        {
            max+=1;
            if(max>s)
                s=max;
        }
        else max=0;
    }
    if(s<=2) cout<<"You are a Foolish Man"<<endl;
    else if(s==3) cout<<"You are on a Killing Spree"<<endl;
    else if(s==4) cout<<"You are Dominating"<<endl;
    else if(s==5) cout<<"You have a Mega-Kill"<<endl;
    else if(s==6) cout<<"You are Unstoppable"<<endl;
    else if(s==7) cout<<"You are Wicked Sick"<<endl;
    else if(s==8) cout<<"You have a M-m-m-m....Monster Kill"<<endl;
    else if(s==9) cout<<"You are Godlike"<<endl;
    else if(s>=10) cout<<"You are Beyond Godlike (Somebody kill him!)"<<endl;
}

