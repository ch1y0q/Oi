#include <stdio.h>

int is_run(int y)
{
    if ((y%4==0&&y%100!=0) || (y%400==0)) return 1;
    else return 0;

}

int main(void)
{
    freopen("data5.in","r",stdin);
    freopen("data5.out","w",stdout);
    int r[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i, n;
    scanf("%d",&n);
    int ans[7];
    for (i=0; i<7; i++) ans[i]=0;
    int days,year;
    days = 13;
    for (i=0; i<n; i++)
    {
        int j;
        year = 1900;
        year += i;
        if (is_run(year))
        {
            for (j=0; j<12; j++)
            {
                ans[days%7]++;
                days+=r[j];
            }
        }
        else
        {
            for (j=0; j<12; j++)
            {
                ans[days%7]++;
                days+= p[j];
            }
        }
    }
    for (i=0; i<7; i++) printf("%d ",ans[(i+6)%7]);
    return 0;
}
