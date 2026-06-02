#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    int id;
    int age;
    string name;
    int no_of_subject;

    // constructor default

    student(){
        cout<<"student constructor called"<<endl;
    }

    // Para meterised constructor

    student(int id,int age ,string name,int no_of_subjects){
        this->id =id;
        this->age = age;
        this->name =name;
        this->no_of_subject =no_of_subjects; 
    }


    // Copy constructor

    student(const student &B){
        this->id =B.id;
        this->age = B.age;
        this->name =B.name;
        this->no_of_subject =B.no_of_subject; 
    }


    void Study(){
        cout<<this->name<<" Is Studying"<<endl;
    }

    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }

    void bunk(){
        cout<<this->name<<" has bunked the class"<<endl;
    }


    // destructor default

    ~student(){
        cout<<"student destructor called"<<endl;
    }




};

int main(){


    //NORMAL CONSTRUCTOR
    // student A;
    // A.id=12;
    // A.name ="Dhoom Machale";
    // A.age = "23";



    //WITH PARAMETARISED CONSTRUCTOR
    student A(12 ,23,"Dhoom Machale",10);
    cout<<A.id<<endl;
    cout<<A.name<<endl;
    cout<<A.age<<endl;
    A.sleep();
    A.bunk();
    A.Study();


// ******************
    //COPY CONSTRUCTOR
    // we know that if we declare 2 variable like
    //int a=5 and do (int b =a) then in b we have 5
    // similary we cant do this with student class directly 
    // first we have to make a copy constructor for this

    student B =A;
    cout<<B.id<<endl;
    cout<<B.name<<endl;
    cout<<B.age<<endl;


    // DYNAMIC MEMORY ALLOCATION

    student *C = new student(10,23,"Henry" ,15);
    cout<<C->id<<endl;
    cout<<C->name<<endl;
    cout<<C->age<<endl;
    delete C;


    return 0;
}