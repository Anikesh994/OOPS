#include <bits/stdc++.h>
using namespace std;


class Employee{
    protected:
    string name;
    int employeeId;

    public:

    Employee(string name, int employeeId ){
        this->name=name;
        this->employeeId =employeeId;
        cout<<"Employee constructor called"<<endl;
    }

    void display(){
        cout<<name<<endl;
        cout<<employeeId<<endl;
    }


};

class Developer : public Employee{
    private:
    string Prog_Lang;

    public:

    Developer(string name, int employeeId,string Prog_Lang) : Employee(name ,employeeId){
        cout<<" Developer constructor called"<<endl;
        this->Prog_Lang =Prog_Lang;
    }

    void show(){
        cout<<"show"<<endl;
    }
};


class Executive : public Employee{
    public:


    Executive(string name, int employeeId) : Employee(name ,employeeId){
        cout<<" Executive constructor called"<<endl;
    }

    void makeExeDecision(){
        cout<<" makeExeDecision constructor called"<<endl;
    }
};


class hrManager : public Employee{
    public:


    hrManager(string name, int employeeId) : Employee(name ,employeeId){
        cout<<" hrManager constructor called"<<endl;
    }

    void handleHrDuties(){
        cout<<"HR Manager Duties constructor called"<<endl;
    }
};

class ProductManager{

    protected:
    string projectManaged;

    public:

    ProductManager(string projectManaged){
        this->projectManaged =projectManaged;
        cout<<"Product Manager constructor called"<<endl;
    }

    void manageProject(){
        cout<<"";
    }
};

class teamLead{

    protected:
    int teamSize;

    public:

    teamLead(int teamSize){
        this->teamSize =teamSize;
        cout<<"Team Lead constructor called"<<endl;
    }

    void leadTeam(){
        cout<<"";
    }
};

class salesManager : public Employee{
    public:

    salesManager(string name, int employeeId) : Employee(name ,employeeId){
        cout<<"sales manager constructor called"<<endl;
    }

    void boostSales(){
        cout<<"";
    }
};

class marketingManager : public Employee{
    public:

    marketingManager(string name, int employeeId) : Employee(name ,employeeId){
        cout<<"marketing manager constructor called"<<endl;
    }

    void marketStrategy(){
        cout<<"";
    }
};


class cro : public Executive{
    public:

    cro(string name, int employeeId) : Executive(name ,employeeId){
        cout<<"cro constructor called"<<endl;
    }

    void leadCompany(){
        cout<<"";
    }
};

class hrDirector : public hrManager{
    public:

    hrDirector(string name, int employeeId) : hrManager(name ,employeeId){
        cout<<"hrDirector constructor called"<<endl;
    }

    void manageHrDepartment(){
        cout<<"";
    }
};


class techLead: public Employee ,public ProductManager ,public teamLead{
    public:

    techLead(string name, int employeeId ,string projectManaged,int teamSize) : Employee(name ,employeeId) , ProductManager(projectManaged) ,teamLead(teamSize){
        cout<<"techLead constructor called"<<endl;
    }

    void displayinfo(){
        cout<<name<<endl;
        cout<<employeeId<<endl;
        cout<<projectManaged<<endl;
        cout<<teamSize<<endl;
    }
};

class businessDevManager : public salesManager ,marketingManager{
    public:

    businessDevManager(string name, int employeeId ) : salesManager(name ,employeeId) , marketingManager(name,  employeeId){
        cout<<"businessDevManager constructor called"<<endl;
    }

    void coordinateBusinessDev(){
        cout<<"";
    }
};

int main(){
    businessDevManager * A =new businessDevManager("afea" ,20 );
    
}