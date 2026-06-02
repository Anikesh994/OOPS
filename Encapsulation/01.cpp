#include <bits/stdc++.h>
using namespace std;

class student 
{


    private:
    int *gpa;
    string gf;


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

    student(int id,int age ,string name,int no_of_subjects,float gpa , string gf){
        this->id =id;
        this->age = age;
        this->name =name;
        this->no_of_subject =no_of_subjects;
        this->gpa =new int(gpa);
        this->gf = gf; 
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

    void get(){
        cout<<*gpa<<endl;
        cout<<this->gf<<endl;
    }
    void set(float gpa ,string gf){
        this->gpa=new int(gpa);
        this->gf=gf;
    }


    // destructor default

    ~student(){
        cout<<"student destructor called"<<endl;
    }




};

int main(){


    student A(12 ,23,"Dhoom Machale",10,7.8,"himanshi");
    cout<<A.id<<endl;
    cout<<A.name<<endl;
    cout<<A.age<<endl;
    A.set(9.1 ,"Meloni");
    A.get();
    


    return 0;
}