#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node *temp = NULL, *head1 = NULL;
int c=0;

void list() {
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

int count(struct node* head,int search_for) {
    while(head != NULL){
        if(head->data==search_for) c++;
        head = head->next;
    }
    return c;
}

void display(node *t) {
    if(t==NULL)return;
    display(t->next);
    printf("-->%d", t->data);
}

int main() {
    int size,n;scanf("%d",&size);
    while(size--) {
        list();
    }
    scanf("%d",&n);
    
    printf("Linked list:");
    display(head1);

    printf("\nCount of %d:%d",n,count(head1,n));

    return 0;
}
