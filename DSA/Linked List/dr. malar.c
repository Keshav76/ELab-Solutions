#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node *head1 = NULL, *temp = NULL;

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
    while(t != NULL) {
        printf("->%d", t->data);
        t = t->next;
    }
}

int in_pos(int n) {
    return --n;
}

void insert_node(int n, int value) {
    int i;
    node *t = head1, *prev = NULL, *newnode=(node*)malloc(sizeof(node));

    for(i=0;i<n;i++){
        prev = t;
       t = t->next; 
    }
    newnode->data = value;
    newnode->next = t;
    prev->next = newnode;
}


int main() {
    int itr;
    scanf("%d",&itr);
    
    while(itr--) create();
    
    int pos,value;
    scanf("%d %d",&pos, &value);
    int n = in_pos(pos);
    
    insert_node(n, value);
    
    printf("Linked List:");
    print(head1);
    

    return 0;
}
