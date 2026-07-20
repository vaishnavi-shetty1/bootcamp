#include<stdio.h>

void main(){
	int a[100],key,n,i;
	printf("enter n: ");
	scanf("%d",&n);
	
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter key: ");
	scanf("%d",&key);
	
	int l=0,r=n-1,mid;
	while(l<r){
		mid=(l+r)/2;
		if(a[mid]==key){
			printf("element found at %d",mid+1);
			break;	
		}
		else if(a[mid]>key){
			r=mid-1;
		}
		else
			l=mid+1;		
	}
	if(a[mid]!=key)
		printf("key not found");		
	
}
