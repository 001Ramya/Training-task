#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,b,p,power=1;
    scanf("%d%d",&b,&p);
    for(i=1;i<=p;i++)
    {
       power=power*b;
    }
    printf("%d",power);
    
    return 0;
}
