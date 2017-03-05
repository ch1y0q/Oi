#include <iostream>
#include <cstdio>
#define Maxn 6

using namespace std;

void bfsint(int cur);

int bmp[Maxn][Maxn];

int main()
{
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
    for(int i=0;i<Maxn;i++)
        for(int j=0;j<Maxn;j++)
        cin>>bmp[i][j];
}

void bfs(int start)
{
    int deq[Maxn]={0};
    int visited[Maxn]={0};
    int head=0,tail=0;

    deq[tail++]=start;

    while(head!=tail)
    {
        int v=deq[head++];
        cout<<v+1<<endl;

        for(int i=0;i<Maxn;i++)
        {
            if(bmp[v][i]==1)
                if(visited[i]==0)
                {

                }
        }
    }

}

/*
#include <iostream>
#include <stdio.h>
using namespace std;
int matrix[6][6];
void bfs(int start){
 int queue[6]={0};
 int visited[6]={0};
 int head=0;
 int tail=0;

 //入队
 queue[tail++]=start;
 visited[start]=1;

 while(head!=tail){
    int v=queue[head++];
    cout<<v+1<<endl;
    for(int i=0;i<6;i++){
    if(matrix[v][i]==1){
            if(visited[i]==0){
                queue[tail++]=i;
                visited[i]=1;
            }

    }
    }
 }


}
int main()
{
    freopen("data.in","r",stdin);
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++){
            cin>>matrix[i][j];
        }
    }
    bfs(1);
    return 0;
}
*/