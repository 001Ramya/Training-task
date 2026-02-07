#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,t=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=t;j++)
        {
            printf("*");
        }
        t++;
        printf("\n");
    }
    
   return 0;
}
