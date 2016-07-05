#include <stdio.h>
#include <stdlib.h>

typedef struct node_struct node;
struct node_struct {
    node *link;
    int data;
    node *rlink;
};

int main(int argc, char const *argv[]){

    node* head = (node*)malloc(sizeof(node));
    head -> link = NULL;
    head -> data = 1;
    head -> rlink = NULL;

    node* head2 = (node*)malloc(sizeof(node));
    head2 -> link = NULL;
    head2 -> data = 2;
    head2 -> rlink = NULL;


    printf("%d\n", head -> data);
    printf("%d\n", head2 -> data);
    return 0;
}
//=========================================================

//=========================================================
