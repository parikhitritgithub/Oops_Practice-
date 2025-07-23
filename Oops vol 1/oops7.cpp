#include<iostream>
using namespace std ; 
class customer {
    string name ; 
    int *data ; 
    public : 
    //constructor 
    customer() {
        name = "parikhit" ;
        data = new int ; 
        *data = 10 ; 
        cout << " Constructor is called\n" ; 
    } 
    //distructor 
    ~customer() {
        delete data ; 
        cout << "Distructor is called\n" ; 
    }
}; 
int main () {
    customer A1 ; 
}