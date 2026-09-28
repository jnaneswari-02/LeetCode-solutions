
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node  *next;
};

 //-----------------------------------------------------------------
/*
int main(){
 struct Node *Node1=(struct Node*)malloc(sizeof (struct Node));
 Node1->data =100; // assigning the Node1 value =100
 Node1->next=NULL;
  struct Node *Node2=(struct Node*)malloc(sizeof (struct Node));
  Node1->data =200;
  Node1->next=NULL;
  Node1->next=Node2; //  to link the Node1 and Node2
  // printf("%d\n %d\n",Node1->data,Node2->data);
   struct Node *Node3=(struct Node*)malloc(sizeof (struct Node)); 
   Node3->data =300;
  Node3->next=NULL;
  Node2->next=Node3;
  printf("%d\n",Node1->next->next);
  printf("%d\n",Node2->next);
  printf("%d\n",Node3);
  
 return 0;
}
*/
 // --------------------------------------------------------------- 
/*
int main(){
	int n,i;
	scanf("%d",&n);
	struct Node *Head = (struct Node*)malloc(sizeof (struct Node));
	struct Node* Temp = Head;
	for(i=0;i<n;i++){
		int Value =0;
   	scanf("%d",&Value);
		struct Node*Newnode = (struct Node*)malloc(sizeof (struct Node));
		Newnode ->data= Value;
		Newnode ->next=NULL;
		Temp->next=Newnode;
		Temp=Temp->next;
			}
		struct Node* Iterator = Head->next;
		while(Iterator !=NULL){
		printf("%d ",Iterator->data);
		Iterator = Iterator->next;
			}		
			return 0;
	}
	*/
	
	
	//-------------------------------------------------------------------

/*
int main(){
	int n,i;
	scanf("%d",&n);
	int max=0,min=999;
	struct Node *Head = (struct Node*)malloc(sizeof (struct Node));
	struct Node* Temp = Head;
	for(i=0;i<n;i++){
		int Value =0;
		scanf("%d",&Value);
		struct Node*Newnode = (struct Node*)malloc(sizeof (struct Node));
		Newnode ->data= Value;
		Newnode ->next=NULL;
		Temp->next=Newnode;
		Temp=Temp->next;
			}
		struct Node* Iterator = Head->next;
		while(Iterator !=NULL){
		 if(max<=Iterator->data){
		 	max=Iterator->data;
		     }
			  if(min>Iterator->data){
		      	min=Iterator->data;
		}
		printf("%d ", Iterator->data);
		Iterator = Iterator->next;
			}	
			printf(" Maximum element :%d\n",max);
			printf(" Minimun element :%d\n",min);	
			return 0;
	}
	*/
	




 int main(){
 struct Node *Node1=(struct Node*)malloc(sizeof (struct Node));
  struct Node *Node2=(struct Node*)malloc(sizeof (struct Node));
  struct Node *Node3=(struct Node*)malloc(sizeof (struct Node));
  struct Node *Node4=(struct Node*)malloc(sizeof (struct Node));
  // linking the nodes
   Node1->next =Node2;
    Node2->next =Node3;
     Node3->next =Node4;
      Node4->next =NULL;
// assigning thre values
      	Node1->data=100;
      	Node2->data=200;
        Node3->data=300;
        Node4->data=400;
        int Position=3;
        int jumps=1;
        struct Node*temp=Node1;
        while(jumps!=Position){
		jumps++;
	 temp=temp-> next;
	          }
	          
	          printf("%d\n",temp->data);
	          printf("%d\n",jumps);
}
//-------------------------------------------------------------
/*
 #include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
 int main(){
 struct Node *Node1=(struct Node*)malloc(sizeof (struct Node));
  struct Node *Node2=(struct Node*)malloc(sizeof (struct Node));
  struct Node *Node3=(struct Node*)malloc(sizeof (struct Node));
  struct Node *Node4=(struct Node*)malloc(sizeof (struct Node));
  // linking the nodes
   Node1->next =Node2;
    Node2->next =Node3;
     Node3->next =Node4;
      Node4->next =NULL;
// assigning thre values
      	Node1->data=100;
      	Node2->data=200;
        Node3->data=300;
        Node4->data=400;
        struct Node*Head=Node1;
        int value=700;
        struct Node *NewNode=(struct Node*)malloc(sizeof (struct Node));
		NewNode ->data=value;
		NewNode ->next=Head;
		Head =NewNode;
		struct Node*temp=Head ;
		while(temp){
		printf("%d\n",temp->data);
			temp=temp->next;
			
		}
	}
	*/  
	/*
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* Next;
};
int main()
{
    int n,i,value;
    scanf("%d",&n);
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Temp = Head;
    
    //creating dynamic linked list
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->data = value;
        NewNode->Next = NULL;
        Temp->Next = NewNode;
        Temp = Temp->Next;
    }
    Head = Head->Next;
    
    
    // insertion at given point
    
    int newValue = 0;
    int position = 0;
    scanf("%d %d",&newValue,&position);
    
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = newValue;
    NewNode->Next = NULL
    
    Temp = Head;
    int Count = 1;
    while(Count != position-1){
        Temp = Temp->Next;
        Count++;
    }
    struct Node* NextNode = Temp->Next;
    Temp->Next = NewNode;
    NewNode->Next = NextNode;
    
    //printing linked list
    Temp = Head;
    while(Temp){
        printf("%d ",Temp->data);
        Temp = Temp->Next;
    }
    return 0;
}
  */
   

/*
#include<stdio.h> // adding the value at last node
#include<stdlib.h>
struct Node{
    int data;
    struct Node* Next;
};
int main()
{
    int n,i,value;
    scanf("%d",&n);
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Temp = Head;
    
    //creating dynamic linked list
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->data = value;
        NewNode->Next = NULL;
        Temp->Next = NewNode;
        Temp = Temp->Next;
    }
    Head = Head->Next;
    
//    adding node at last
    
    Temp = Head;
    while(Temp->Next != NULL){
        Temp = Temp->Next;
    }
    scanf("%d",&value);
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = value;
    NewNode->Next = NULL;
    Temp->Next = NewNode;


    
    //printing linked list
    Temp = Head;
    while(Temp){
        printf("%d ",Temp->data);
        Temp = Temp->Next;
    }
    return 0;
}
*/

//---------------------------------------------------------------------------------
// Deleting a value at last node
/*

#include<stdio.h>   
#include<stdlib.h>
struct Node{
    int data;
    struct Node* Next;
};
int main()
{
    int n,i,value;
    scanf("%d",&n);
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Temp = Head;
    
    //creating dynamic linked list
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->data = value;
        NewNode->Next = NULL;
        Temp->Next = NewNode;
        Temp = Temp->Next;
    }
    Head = Head->Next;
    
//    delete at given position node
   int position,count=1;
   scanf("%d",&position);
    Temp=Head;
    if(position==1){
    	Temp=Temp->Next;
    	Head=Temp;
	} else{
	
	 while(count!=position-1){
    	Temp=Temp->Next;
    	count++;
    }
    Temp->Next=Temp->Next->Next;
}

    //printing linked list
    Temp = Head;
    while(Temp){
        printf("%d ",Temp->data);
        Temp =Temp->Next;     
    }
    return 0;
}

*/
/*
 #include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* Next;
};
int main()
{
    int n,i,value;
    scanf("%d",&n);
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Temp = Head;
    
    //creating dynamic linked list
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->data = value;
        NewNode->Next = NULL;
        Temp->Next = NewNode;
        Temp = Temp->Next;
    }
    /*Head = Head->Next;
    //delete last node
    Temp=Head;
    while(Temp->Next->Next!=NULL){
    	Temp=Temp->Next;
	}
	Temp->Next=NULL;
	//for first node
	Head = Head->Next->Next;
      //printing linked list
    Temp = Head;
    while(Temp){
        printf("%d ",Temp->data);
        Temp = Temp->Next;
    }
    return 0;
}

*/

      























