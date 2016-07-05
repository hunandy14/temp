/**********************************************************
Name : link
Date : 2016/07/05
By   : CharlotteHonG
Final: 2016/07/05
**********************************************************/
#include <iostream>
#include "single"
using namespace std;

/*=======================================================*/
template <typename T1>
class sgink{
private:
    // 宣告節點結構
    struct node{
        T1 data;
        node* next{nullptr};
    };
    // 宣告開頭
    node head;
    
public:
    sgink();
    sgink(const T1 &n);
    node* create(const T1 &n);
    // void append();
    void pri();
};
/*=======================================================*/
template <typename T1>
sgink<T1>::sgink(){
    this->head.data = -1;
    this->head.next = 0;
}

template <typename T1>
sgink<T1>::sgink(const T1 &n){
    this->head.data = n;
}

template <typename T1>
node* sgink<T1>::create(const T1 &n){
    node *temp = new node;
    temp->data = -1;
    temp->next = 0;
    return temp;
}

template <typename T1>
void sgink<T1>::pri(){
    cout << this->head.data << endl;
}
/*=======================================================*/
int main(int argc, char const *argv[]){
    sgink<int> a;
    a.pri();
    return 0;
}
/*=======================================================*/
