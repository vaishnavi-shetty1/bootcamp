#include<stdio.h>

void main(){
	int a[100],n,i,j,temp,iter=0,flag;
	printf("enter n: ");
	scanf("%d",&n);
	printf("enter elements: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	int s_index=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				s_index=j+1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				s_index=0;
			}
			else{
				s_index++;
			}
			iter++;
		}
	}
	printf("Loop ran %d times",iter);
}

