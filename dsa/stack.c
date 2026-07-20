#include <stdio.h>


int sum_of_n(int n)
{
	if (n==1){
	        return 1;
	}
	return n+sum_of_n(n-1);
}

int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	printf("the sum of %d natural number is:%d",n,sum_of_n(n));
	return 0;
                
}


