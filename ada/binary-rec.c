#include<stdio.h>


int a[100],n,key,l,r,mid;

int binrec(int a[],int key,int l, int r, int mid){
	for(int i=l;i<r;i++)
		return printf("key found at %d",mid);
}

void main(){
	printf("enter n: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter key: ");
	scanf("%d",&key);
	l=0;r=n-1;mid=(l+r)/2;
	while(l<r){
		if(a[mid]==key)
			printf("key found at %d",mid+1);
		else if(a[mid]>key)
			return binrec(a,key,l=0,r=mid-1,mid);
		else
			return binrec(a,key,l=mid+1,r=n-1,mid);
	}
	if(a[mid]!=key)
		printf("key not found");
}
