#include<stdio.h>  
#define LEN 1010  
  
int s[LEN],x[LEN],n;  
  
int increase(int n) /**<- 最长上升序列,我尽量说清楚，因为本人在这个问题上纠结了很长时间， */  
{                   /**<- 网上的我没看懂，所以自己研究了一下，希望你明白，不再纠结^_^ */  
    x[0]=1;         /**<- x[0]存储了x[]的长度 */  
    x[1]=s[1];      /**<- x[n]存储长度为n的序列的尾数，可以知道它是严格单增的 */  
    int x1,x2,mid,i;  
  
  
    for(i=2;i<=n;i++)  
    {  
        x1=1;  
        x2=x[0];  
        if(x[1]>s[i])           /**<- s[i]小于所有的尾数，所以它目前只能构成长度为1的序列 */  
            x[1]=s[i];          /**<- 并且我们此时要更新x[1],以保留更小的允许的尾数 */  
        else if(x[x[0]]<s[i])   /**<- s[i]大于所有尾数，所以把它接在最长的序列的后面 */  
            x[++x[0]]=s[i];     /**<- 并修改x[]的长度 */  
        else                    /**<- 二分搜索，看了网上的代码，我很纠结==！*/  
        {                       /**<- 我们的目的：找到最大的pos，使其满足s[i]>x[pos] */  
            while(x1<=x2)  
            {  
                mid=x1+(x2-x1)/2;  
                if(s[i]>x[mid]) /**<- s[i]大于区间的中点，所以pos的最大值应在[mid,x2],注意x[]单增 */  
                    x1=mid+1;   /**<- 调整直至s[i]<=x[x1],此时x1在要求的pos的右侧，即pos=x1-1,因为最后一次调整时x[mid]<s[i]<=x[mid+1] */  
                else            /**<- 不大于的情况,即s[i]<=x[mid]，在左半边区间寻找*/  
                    x2=mid-1;  
            }  
            if(s[i]<x[x1])    /**<- 最终的pos是x1-1, */  
                x[x1]=s[i];   /**<- 更新，这个很好理解 */  
        }  
    }  
    return x[0];  
}  
  
int nIncrease(int n)    /**<-最长不升子序列，not increase...,原理和上面差不多 */  
{  
    x[0]=1;  
    x[1]=s[1];  
    int x1,x2,mid,i;  
    for(i=2;i<=n;i++)  
    {  
        if(s[i]>x[1])  
            x[1]=s[i];  
        else if(s[i]<=x[x[0]])  
            x[++x[0]]=s[i];  
        else  
        {  
            x1=1;  
            x2=x[0];  
            while(x1<=x2)  
            {  
                mid=x1+(x2-x1)/2;  
                if(s[i]<=x[mid])  
                    x1=mid+1;  
                else  
                    x2=mid-1;  
            }  
            if(s[i]>x[x1])  
                x[x1]=s[i];  
        }  
    }  
    return x[0];  
}  
  
int main(void)  
{  
    int i;  
    scanf("%d",&n);  
    for(i=1;i<=n;i++)  
        scanf("%d",s+i);  
  
    printf("%d %d/n",nIncrease(n),increase(n));  
  
    return 0;  
}  