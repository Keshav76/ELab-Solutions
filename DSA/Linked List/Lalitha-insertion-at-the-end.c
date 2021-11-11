#include "stdio.h"
#include "stdlib.h"

typedef struct node {
    int data;
    struct node *next;
}node;

node *start = NULL,*prev=NULL;

void display() {
    node *p2 = start;
    while(p2!=NULL) {
        printf("->%d",p2->data);
        p2=p2->next;
    }
}

int main() {
    int n; scanf("%d",&n);
    
    while(n--) {
        node *ptr = (node*)malloc(sizeof(node));
        scanf("%d",&ptr->data);
        ptr->next = NULL;
        
        if(!start){
            start=ptr;
            prev=ptr;
        }else{
            prev->next=ptr;
            prev=ptr;
        }
    }
    
    printf("Linked List:");
    display();
    
    return 0;
}
