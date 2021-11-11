#include "stdio.h"
#include "stdlib.h"

typedef struct node {
    int data;
    struct node* next;
}node;

node *start = NULL;

void push() {
    node *p1 = (node*)malloc(sizeof(node));
    scanf("%d",&p1->data);
    p1->next=start;
    start = p1;
}

void search(struct node* head,int x) {
    while(head!=NULL) {
        if(head->data == x){
            printf("Yes");
            break;
        }
        head=head->next;
    }
    if(head==NULL)printf("No");
}

int main() {
    int n; scanf("%d",&n);
    
    while(n--) push();
    
    int num; scanf("%d",&num);
    search(start,num);
    
    return 0;
}
