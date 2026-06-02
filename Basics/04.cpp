#include <bits/stdc++.h>
using namespace std;

void allocate(int * &length ,int * &width){
    length =new int;
    width =new int;
}

void input(int * &length ,int * &width){
    cin>>*length>>*width;
}

void print(int * &length ,int * &width){
    cout<<*length<<endl;
    cout<<*width<<endl;
}

void area(int * &length ,int * &width){
    cout<<"The Area OF Rectangle Are ";
    cout<< (*length) * (*width)<<endl;

}

void deallocate(int * &length ,int * &width){
    delete length;
    length=nullptr;
    delete width;
    width=nullptr;

}



int main(){
    int *length;
    int *width;
    allocate(length,width);
    input(length,width);
    print(length,width);
    area(length,width);
    deallocate(length,width);
    return 0;

}