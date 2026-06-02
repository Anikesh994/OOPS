/*
Write a program that will read monthly sales into a dynamically allocated array. The program will input the size of the array from the user. It will call a function that will find the yearly sum (the sum of all the sales). It will also call another function that will find the average. Then it calls a display function that will display the total sales for the year and average monthly sale.

*/


#include <bits/stdc++.h>
using namespace std;

void input(int size , int *&ar1){
    for(int i=0;i<size;i++){
        cin>>ar1[i];
    }
}

int yearSum(const int *arr, const int &size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int average(const int *arr, const int &size)
{
    return yearSum(arr, size) / size;
}
void display(const int *arr, const int &size)
{
    cout << "The elements in the array :\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}




int main(){
    int size;
    cin>>size;
    int *ar1 = new int[size];
    input(size , ar1);
    cout << "The averag of the monthly sales :" << average(ar1, size) << "\n";
    cout << "The averag of the monthly sales :" << yearSum(ar1, size) << "\n";
    display(ar1,size);
  
    delete[] ar1;
    ar1=nullptr;
    return 0;
}