#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node *Make_Node (Node *P, int x) //tao 1 Node P chua thong tin la x 
{
    P = (Node *) malloc (sizeof (Node)); //Cap phat vung nho cho P
    P->next = NULL; //Cho truong Next tro den NULL
    P->data = x; //Ghi du lieu vao Data
    return P; 
}

Node* insert(Node *head,int data)
{
//	Node *P; 
//    P = Make_Node(P,data); //tao 1 Node P
//    P->next = head; //Cho P tro den L
//    head = P; //L tro ve P
	if (head == NULL)
		return (Make_Node(head, data));
	else
		if (head->next == NULL)
			head->next = Make_Node(head, data);
		else
			insert(head->next, data);
		return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}

int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
    display(head);
}

