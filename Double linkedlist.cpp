#include<stdio.h> // double linked list printing
#include<stdlib.h>
/*
struct node{
	int data;
	struct node*next;
	struct node*prev;
};
int main()
{
	int n,i,value;
	struct node*head=(struct node*)malloc(sizeof(struct node));
	struct node*temp=head;
	head->prev=NULL;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &value);
		struct node*newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		temp->next=newnode;
		newnode->prev=temp;  
		temp=temp->next;
	}
	head=head->next;
	head->prev=NULL;
	temp=head;
	//TO DYNAMICALLY PRINT THE DOUBLE LINKED LIST
	while(temp){
		printf("%d ", temp->data);
		temp=temp->next;
	}
	
}
*/
/*
#include<stdio.h>   // in double reverse linked list printing
#include<stdlib.h>
 
struct Node{
    int Data;
    struct Node* Next;
};
 
int main()
{
    int N,i,value;
    scanf("%d",&N);
    //creating HeadNode
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    Head->Next = NULL;
    
    // Reading Values From Users
    for(i=0;i<N;i++){
        scanf("%d",&value);
        //Creating Newnode
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->Data = value;
        // Adding NewNode Before Head
        NewNode->Next = Head;
        // Updating to New Head
        Head = NewNode;
    }
    
    struct Node* Temp = Head;
    // printing values of linkedlist
    while(Temp){
        printf("%d ",Temp->Data);
        Temp = Temp->Next;
    }
}
*/#include<stdio.h>
#include<stdlib.h>

struct Node{
    int Data;
    struct Node* Next;
    struct Node* Prev;
};

int main()
{
    int N,i,value;
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    Head->Prev = NULL;
    
    struct Node* Temp = Head;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&value);
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->Data = value;
        NewNode->Next = NULL;
        Temp->Next = NewNode;
        NewNode->Prev = Temp;
        Temp = Temp->Next;
    }
    Head = Head->Next;
    Head->Prev = NULL;
    Temp = Head;
    while(Temp){
        printf("%d ",Temp->Data);
        Temp = Temp->Next;
    }
}
 



