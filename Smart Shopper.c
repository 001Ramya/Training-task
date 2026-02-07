#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int p1,p2,p3,a,b,c,budget;
    float btax,atax,tax;
    scanf("%d%d%d%d%d%d%d",&p1,&a,&p2,&b,&p3,&c,&budget);
    btax=(p1*a)+(p2*b)+(p3*c);
    printf("Total (Before Tax): %.2f",btax);
    tax=btax/10;
    atax=btax+tax;
    printf("\nTotal (After Tax): %.2f",atax);
    if(atax<=budget)
        printf("\nWithin Budget");
    else 
        printf("\nOver Budget");
    
      
    return 0;
}
