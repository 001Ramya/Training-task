#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char n[100];
    int i,max=0,min=1000;
    scanf("%s",n);
    for(i=0;i!=strlen(n);i++)
    {
        if(n[i]>='0'&&n[i]<='9')
        {   
           int digit=n[i]-'0';
            if(digit>max)
                max=digit;
             if(digit<min)
                min=digit;
        }
        
    }
    printf("%d %d",max,min);
    
    return 0;
}
