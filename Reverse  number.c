
#include <stdio.h>

int main() {
	// your code goes here
	int n,i,t;
	scanf("%d",&n);
	while(n>0)
	{
	    t=n%10;
	    printf("%d",t);
	    n=n/10;
	}
	return 0;

}
