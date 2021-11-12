#include <stdio.h>
#include <stdlib.h>

//constructing the structure of a node
typedef struct node {
    int data;
    struct node *next;
}node;

void arr(int a[], int size) {
    int i;
    for(i = 0; i < size; i++) scanf("%d",&a[i]);
}

void create(struct node **head,int data) //fuction to build the linked list
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
void print(struct node *head)  //displaying the linked List 
{
    node* ptr = head;
    while (ptr) {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

node* newNode(int data)//allocating memory to a new node(dummy node)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//function for reversing the List
void reverselist(node** head) { 
    node *prev = NULL, *curr = *head, *next; 
  
    while (curr) { 
        next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
    } 
  
    *head = prev; 
}

void fold(node** head) //function for rearranging the node
{ 
     
    node *slow = *head, *fast = slow->next; 
    while (fast && fast->next) { 
        slow = slow->next; 
        fast = fast->next->next; 
    } 
    node* head1 = *head; 
    node* head2 = slow->next; 
    slow->next = NULL;//slow pointer will be at middle position 

    reverselist(&head2);//reversing second half of the list 
  
   
    *head = newNode(0); // Assign dummy Node 
  
    node* curr = *head; 
    while (head1 || head2) { 
        if (head1) { 
            curr->next = head1; 
            curr = curr->next; 
            head1 = head1->next; 
        } 
  
        if (head2) { 
            curr->next = head2; 
            curr = curr->next; 
            head2 = head2->next; 
        } 
    } 
  
    *head = (*head)->next; 
} 

int main() {
    int n,i;
    scanf("%d",&n);
    int data[n];
    arr(data,n);

    struct node* head = NULL;

    //constructing linked list
    for(i = n-1; i >= 0; i--) {
        create(&head, data[i]);
    }
    printf("Link list data:");  
    print(head);
    
    fold(&head);
    printf("\nLink list data after fold:");
    print(head);

    return 0;
}
