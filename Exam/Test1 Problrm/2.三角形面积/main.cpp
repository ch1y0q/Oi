#include <stdio.h>
#include <math.h>

int main()
{
    float dwTriA,dwTriB,dwTriC,dwS,dwHalfC=0;
    scanf("%f %f %f",&dwTriA,&dwTriB,&dwTriC);
    dwHalfC=(dwTriA+dwTriB+dwTriC)/2.0F;
    dwS=sqrtf(dwHalfC*(dwHalfC-dwTriA)*(dwHalfC-dwTriB)*(dwHalfC-dwTriC));
    if(dwTriA+dwTriB<=dwTriC || dwTriA+dwTriC<=dwTriB || dwTriC+dwTriB<=dwTriA){
        printf("No answer");
        return 0;
    }
    printf("%.2f",dwS);
    return 0;

}

