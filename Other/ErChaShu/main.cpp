#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
#include <sstream>
using namespace std;
stack <double> st1;

int main()
{
    ios::sync_with_stdio(false);
    string str;
    //char str[99];
    int c,i=0,a,b;
    //cin.getline(str,99);
    str="99 123";
    while(sprintf(str,"%d",c))
    {
        i++;
        if(i==2)
        {
            a=st1.top();
            st1.pop();
            b=st1.top();
            st1.pop();
            switch(c)
            {
                case '+':st1.push(a+b);break;
                case '-':st1.push(a-b);break;
                case '*':st1.push(a*b);break;
                case '/':st1.push(a/b);break;
                case '@':goto result;
            }


        }
        else
            st1.push(c);
    }
    result:
    a=st1.top();
    cout<<a<<endl;
    return 0;
}
