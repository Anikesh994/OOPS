#include <bits/stdc++.h>
using namespace std;

class complex1{
    public:
    int real;
    int imaginary;

    complex1(int real ,int imaginary){
        this->real =real;
        this->imaginary =imaginary;
    }

    complex1 operator + (const complex1 &c){
        return complex1(
            real + c.real,
            imaginary + c.imaginary
        );
    }

    complex1 operator - (complex1 C){
        return complex1(real-C.real ,imaginary-C.imaginary);
    }
};




int main(){
    complex1 A(2,3);
    complex1 B(4,5);

    complex1 C =A+B;


    cout << C.real << " + " << C.imaginary << "i" << endl;




}