// class Child : access_specifier Parent {
// };

#include <bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
    string name;
    string model;
    int no_of_tyres;

    Vehicle(string name ,string model , int no_of_tyres){
        this->name =name;
        this->model =model;
        this->no_of_tyres=no_of_tyres;
    }



    public:

    void StartEngine(){
        cout<<"The Engine Has Been Started"<<endl;
    }

    void StopEngine(){
        cout<<"The Engine Has Been Stopped"<<endl;
    }

};

class Car : public Vehicle{
    public:
    int no_of_doors;
    string Transmission_type;

    Car(string name ,string model , int no_of_tyres ,int no_of_doors , string Transmission_type) : Vehicle(name ,model ,no_of_tyres) {

        this->no_of_doors =no_of_doors;
        this->Transmission_type =Transmission_type;
    }

    void StartAc(){
        cout<<"The Ac Has Been Started"<<endl;
    }
};






int main(){
    Vehicle A("THAR" ,"ASW234" ,4);
    A.model;
    A.name;
    A.no_of_tyres;
    A.StartEngine();
    A.StopEngine();

    Car B("Swift" , "Maruti" ,4,4,"feff");
    cout<<B.model<<endl;;
    B.no_of_doors;
    B.Transmission_type;
    B.StartEngine();
}