#include<iostream>
using namespace std ; 
class customer {
    string name ; 
    int *data ; 
    public : 
    customer() {
        cout << " Constructor is called " ; 
    } 
    ~customer() {
        cout << "Distructor is called " ; 
    }

}; 
int main () {
    customer A1 ; 

}