#include<stdio.h>

int main(){
	int key,n,a[100],i;
	printf("enter n: ");
	scanf("%d",&n);
	
	printf("enter the element: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter key element");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			printf("key found at %d",i+1);
			break;
		}
		return 0;
	}
	printf("key not found");
}
