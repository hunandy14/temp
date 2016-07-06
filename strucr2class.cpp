/**********************************************************
Name : 
Date : 2016/07/06
By   : CharlotteHonG
Final: 2016/07/06
**********************************************************/
#include <iostream>
using namespace std;

class structs{
friend class test;
private:
    int a;
    string b;
};

class test{
public:
    test(){
        stc.a=10;
        stc.b="123";
    }
    int pria(){
        return stc.a;
    }
    string prib(){
        return stc.b;
    }
private:
    structs stc;
};
/*=======================================================*/
int main(int argc, char const *argv[]){
    test obj;
    cout << obj.pria() << endl;
    cout << obj.prib() << endl;
    return 0;
}
/*=======================================================*/
