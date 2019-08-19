#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void print_linkedlist(struct Node* node){
	while(node!=NULL){
		printf("%d ",node->data);
		node=node->next;
	}
}
struct Node* insert_beg(struct Node* head,int new_val){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_val;
	new_node->next=head;
	head=new_node;
	return head;
}
struct Node* insert_end(struct Node* head,int val){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
        temp=head;
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=val;
	new_node->next=NULL;

	while(temp->next!=NULL){
		temp=temp->next;		
	}
	temp->next=new_node;
	return head;
}
int main(int argc,char *argv[]){
      int n=atoi(argv[1]);
      int val=atoi(argv[2]);
     int value=atoi(argv[3]);
      //int head;
      struct Node* node[n];
      for(int i=0;i<n;i++){
	      node[i]=NULL;
	      node[i]=(struct Node*)malloc(sizeof(struct Node));
      }
      int j=0;
      for(int i=0;i<n-1;i++){
	      j++;
	      node[i]->data=j;
	      node[i]->next=node[i+1];
      }
      node[n-1]->data=j+1;
      node[n-1]->next=NULL;
      printf("The Linked List is\n");
     print_linkedlist(node[0]);
     //struct Node* head=insert_beg(node[0],val);
     printf("\nAfter inserting given value at the beginning\n");
     struct Node* head=insert_beg(node[0],val);
      print_linkedlist(head);
      //struct Node* end=insert_end(node[0],value);
      printf("\nAfter inserting given value at the end\n");
      struct Node* end=insert_end(node[0],value);
      print_linkedlist(end);
      return 0;
}
