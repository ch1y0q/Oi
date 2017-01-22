#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

using namespace std;

FILE *in,*out;

void do_it();
void find_title();
void find_problem();

int main()
{
    out=fopen("problem.html","a");
    do_it();
    return 0;
}

void do_it()
{
    in=fopen("showproblem-problem_id=1600.html","r"); //仅测试，改为多个文件批量读取
    void find_title();
}

void find_title()
{
    char title_begian[]="<title>";
    char title_end[]="</title>";
    vector<char> art;
    art.clear();
    while()
    {
        
    }
}
