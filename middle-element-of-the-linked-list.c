#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node *head1 = NULL, *temp = NULL;
int n;

void create() {
    node *ptr = (node*)malloc(sizeof(node));
    scanf("%d", &ptr->data);
    ptr->next = NULL;

    if(head1 == NULL) {
        head1 = ptr;
        temp = ptr;
    }
    else {
        temp->next = ptr;
        temp = ptr;
    }
}

void print(node *t) {
    if(t==NULL)return;
    print(t->next);
    printf("-->%d", t->data);
}

void printMiddle(struct node *head) {
    int itr;
    if(n%2) itr = n/2;
    else itr = n/2 - 1;
    
    while(itr--) {
        head = head->next;
    }
    printf("[%d]",head->data);
}

int main() {
    scanf("%d",&n);
    
    int itr = n;
    while(itr--) create();
    
    printf("Linked list:");
    print(head1);
    
    printf("\nThe middle element is ");
    printMiddle(head1);

	return 0;
}
