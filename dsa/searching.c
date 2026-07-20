#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void addNode(**head){
	printf("Enter number of nodes: ");
	scanf("%d", &n);
	
	struct node *temp = NULL;
	
	for(i=0; i<n; i++){
		newnode = (struct node*)malloc(sizeof(struct node));
		scanf("%d", &newnode->data);
		
		if (head==NULL)
			head=temp=newnode;
		else{
			temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newnode;
		}
	}
}


void displayList(**head){
	struct node *temp;
	
	temp = head;
	while(temp->next != NULL){
		printf("-%d--", temp->data);
		temp = temp->next;
	}
	printf("%d-", temp->data);
}

void searchNode(**head){
	int key, count=1;
	struct node *temp;
	
	printf("Enter the key:");
	scanf("%d", &key);
	temp = head;
	while(temp->next != NULL){
		if (temp->data == key){
			printf("Data found at %d\n", count);
			break;
		}
		temp = temp->next;
		count++;
	}
	if (temp->data == key){
		printf("Data found at %d\n", count);
	} else {
		printf("Data not found\n");
	}
}

void main(){
	struct node *head=NULL, *temp, *newnode, choice;
	int n, i;
	
	printf("----------MENU----------\n");
	printf("1. Add nodes\n");
	printf("2. Delete node\n");
	printf("3. Search\n");
	printf("4. Display\n");
	printf("5. Exit\n");  
	
	while(true){
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: addNode(&head); break;
			case 2: deleteNode(&head); break;
			case 3: searchNode(&head); break;
			case 4: displayList(&head); break;
			case 5: break;
			default: printf("Enter a valid choice!\n");
		}
		if (choice==5){
			break;
		}
		
	}	
}



