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
    node *it=start;
    while(it!=NULL) {
        printf("-->%d",it->data);
        it=it->next;
    }
}

int GetNth(struct node* head,int index){
    while(index--) {
        head = head->next;
    }
    return head->data;
}

int main() {
    int n; scanf("%d",&n);
    
    while(n--) push();
    
    int pos; scanf("%d",&pos);
    
    printf("Linked list:");
    display();
    
    int num=GetNth(start,--pos);
    printf("\nNode at index=%d:%d",++pos,num);
    
    return 0;
}
