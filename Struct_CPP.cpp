//=========================================================
#include <iostream>
using namespace std;
//=========================================================
typedef struct node_struct node;
struct node_struct {
    node_struct *link;
    int data;
    node_struct *rlink;
};

int main(int argc, char const *argv[]){

    node *head;
    head = new node;
    head -> link = NULL;
    head -> data = 1;
    head -> rlink = NULL;

    node *head2;
    head2 = new node;
    head2 -> link = NULL;
    head2 -> data = 2;
    head2 -> rlink = NULL;

    cout << head -> data <<endl;
    cout << head2 -> data <<endl;
    cout << endl;
    return 0;
}
//=========================================================
