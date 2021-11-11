#include "stdio.h"
#include "stdlib.h"

typedef struct node {
    int data;
    struct node *next;
}node;

node *start = NULL;

void push() {
    node *p1 = (node*)malloc(sizeof(node));
    scanf("%d",&p1->data);
    p1->next=start;
    start = p1;
}

void display() {
    while(start!=NULL) {
        printf("->%d",start->data);
        start=start->next;
    }
}

int main() {
    int n; scanf("%d",&n);
    
    while(n--) push();
    
    printf("Linked List:");
    display();
    
    return 0;
}
