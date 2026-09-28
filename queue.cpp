/*
#include<stdio.h>
	int front=-1;
	int rear=-1;
	void Enqueue(int arr[],int value,int n){
		if(front ==-1 && rear==-1){
			arr[front +1]=value;
			front++;
			rear++;
			printf("%d is inserted: \n ",value);
		}
		else if((front - rear) +1<n){
			arr[front+1]=value;
			front++;
			printf("%d is inserted :\n",value);
		}
		   else if ((front -rear) +1>=n){
			printf("QUEUE IS FULL\n");
		}
	}
	void Dequeue (int arr[],int n){
		if(rear > front || (rear ==-1 && front ==-1) ){
			printf("QUEUE IS EMPTY");
		}else{
			printf("%d is deleted :\n",arr[rear]);
			rear=-1;
			front=-1;
		}
	}
	void display (int arr[]){
		int i;
		for(i=rear;i<=front;i++){
			printf("%d",arr[i]);
		}
	}	
	
	
	
	int main(){
		int n;
		printf("enter the size of queue:");
		scanf("%d",&n);
		int arr[10000];
		Enqueue(arr,100,n);
		Enqueue(arr,200,n);
		Enqueue(arr,300,n);
		display(arr);
		Enqueue(arr,400,n);
		Dequeue(arr,n);
		Enqueue(arr,500,n);
		display(arr);
		return 0;
		
		
} */


#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
    struct node*next;
};
 int  sizeofqueue(struct node**rear){
	int length =0;
	struct node*temp=*rear;
	while(temp!=NULL){
		length++;
		temp=temp->next;
	}
	return length;
}
void enqueue(struct node**front,struct node**rear,struct node**head,int value,int n){
	if(sizeofqueue(*&rear)>=n){
		printf("QUEUE IS FULL\n");
	}
	 else if(*front == NULL && *rear==NULL){
		(*head)->data=value;
		*front =*head;
		*rear=*head;
		printf("%d is inserted\n",value);
	}else  {
		struct node*newnode= (struct node*)malloc(sizeof(struct node ));
		newnode->data=value;
		newnode->next= NULL;
		(*front)->next=newnode;
		(*front)=(*front)->next;
	}
}
void dequeue(struct node**rear ,struct node**front){
	if(*front==NULL&&rear==NULL){
		printf("QUEUE IS EMPTY: \n");
	}else if (*front !=NULL && *rear==NULL){
		printf("QUEUE IS FULL \n");
		*front=NULL;
		*rear=NULL;
	}else{
		printf("%d is Deleted \n",(*rear)->data);
		(*rear)=(*rear)->next;
	}
		
	}

void display(struct node**rear){
	struct node*temp=*rear;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf(" \n");
}
int main(){
	int n;
	printf("Enter the size of queue: \n");
	scanf("%d",&n);
	struct node*front=NULL;
	struct node*rear=NULL;
	struct node*head=(struct node*)malloc(sizeof(struct node));
	enqueue(&front ,&rear,&head,100,n);
	enqueue(&front ,&rear,&head,200,n);
    enqueue(&front ,&rear,&head,300,n);
    display(&rear);
    enqueue(&front ,&rear,&head,500,n);
    enqueue(&front ,&rear,&head,600,n);
    enqueue(&front ,&rear,&head,700,n);
    display(&rear);
    
}




















