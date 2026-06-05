#include<bits/stdc++.h> 
using namespace std;


class add{
    public:

    add(){
        cout<<" add constructor called"<<endl;
    }

    add(int a ,int b,int c){
        cout<<" parametarised add constructor called"<<endl;
    }

    void add_temp(int a , int b){
        cout<<(a+b)<<endl;
    }

    void add_temp(int a , int b,int c){
        cout<<(a+b+c)<<endl;
    }

    void add_temp(double a , double b){
        cout<<(a+b)<<endl;
    }
};

int main(){
    add * A =new add();
    A->add_temp(1.2,1.5);
    A->add_temp(1,1);
    A->add_temp(1,4,5);
    delete A;

}