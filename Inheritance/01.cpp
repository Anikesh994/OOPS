// class Child : access_specifier Parent {
// };

#include <bits/stdc++.h>
using namespace std;

class Vehicle{
    private:
    string name;
    public:
    
    string model;
    int no_of_tyres;


    Vehicle(string name ,string model , int no_of_tyres){
        this->name =name;
        this->model =model;
        this->no_of_tyres=no_of_tyres;
    }



    public:

    void get(){
        cout<<name<<endl; 
    }
    void set(string name){
        this->name =name;
    }

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


class bike : public Vehicle{
    protected:
    string handelBarStyle;
    string suspensionType;

    public:

    bike(string name ,string model , int no_of_tyres,string handelBarStyle , string suspensionType) : Vehicle(name ,model, no_of_tyres){
        cout<<"Bike constructor called "<<name<<endl;
        this->handelBarStyle =handelBarStyle;
        this->suspensionType =suspensionType;
    }



    void bikeStart(){
        cout<<"Bike has been started"<<endl;
    }

    void bikeBrakes(){
        cout<<"Bike Brakes has been applied"<<endl;
    }
};






int main(){
    Vehicle A("THAR" ,"ASW234" ,4);
    A.model;
    A.no_of_tyres;
    A.StartEngine();
    A.StopEngine();

    Car B("Swift" , "Maruti" ,4,4,"feff");
    cout<<B.model<<endl;;
    B.no_of_doors;
    B.Transmission_type;
    B.StartEngine();
    B.get();
    B.set("BMW");
    B.get();
}