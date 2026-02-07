#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,c=0,i,x,t,r=0,o;
    scanf("%d",&n);
    x=n;
    o=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        t=x%10;
        r+= pow(t,c);
        x=x/10;
        
    }
   if(r==o)
   {
       printf("true");
   }
    else
        printf("false");
    
    
    
    return 0;
}
