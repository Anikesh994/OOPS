#include <iostream>
#include <vector>
using namespace std;


// Represents a customer order
class OrderItem {
public:
    string productName;
    int quantity;
    double price;

    OrderItem(string name, int qty, double price) {
        productName = name;
        quantity = qty;
        this->price = price;
    }
};


// Violates SRP
class Order {
private:
    vector<OrderItem*> items;
    string customerName;

public:

    Order(string customerName) {
        this->customerName = customerName;
    }


    // Responsibility 1: Managing order items
    void addItem(OrderItem* item) {
        items.push_back(item);
    }

    vector<OrderItem *>& GetItems(){
        return items;
    }

};

class SaveOrder{
    public:


    void Save(Order * ord){
        cout<<"this order has been saved"<<endl;
    }

    void sendConfirmationMessage() {

        cout << "Sending order confirmation message..." << endl;
    }

};


class PrintReceipt{

    public:
    void PrintRec(double total , Order * ord){
        for(auto item : ord->GetItems()) {
            cout << item->productName 
                 << " x "
                 << item->quantity
                 << " = "
                 << item->price * item->quantity
                 << endl;
        }
        cout << "Final Amount: " << total << endl;

    }

};


class ApplyDiscount{
    public:
    
    double ApplyDisc(double total){
        cout<< "Before Discount " << total << endl; 
        if(total > 5000){
            total =total - (total*0.10);
        }
        cout<<"After Discount "<<total <<endl;
        return total;    
    }

    
};

class CalcBill{
    public :
    double CalculateBill(Order * order1){
        double total=0;
        for(auto it :order1->GetItems()){
            total+=(it->price * it->quantity);
        }
        return total;
    }
};




int main() {


    OrderItem *a1 = new OrderItem("Cream" ,2 ,200);
    OrderItem *a2 = new OrderItem("biscuit" ,4 ,600);
    OrderItem *a3 = new OrderItem("Cream" ,31 ,150);

    Order *A = new Order("Amit");
    A->addItem(a1);
    A->addItem(a2);
    A->addItem(a3);
    CalcBill calc;
    ApplyDiscount discount;
    PrintReceipt printer;
    SaveOrder saver;

  
  double total = calc.CalculateBill(A);
  total = discount.ApplyDisc(total);
  printer.PrintRec(total, A);
  
  
  saver.Save(A);
  saver.sendConfirmationMessage();

    return 0;
}