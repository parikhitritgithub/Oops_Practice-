// inheritence 
#include<iostream>
using namespace std ; 
class human {
    private:
    int a ; 
    protected:
    int b ; 
    //  void fun() {
    //     int a = 10 ; 
    //     int b = 20 ; 
    //     int c = 30 ; 
    // }
    public:
    int c ;
    
    void fun() {
        int a = 10 ; 
        int b = 20 ; 
        int c = 30 ; 
    }
} ; 
int main () {

    human parikhit ; 
    parikhit.c = 10 ; 
    // parikhit.fun () ; 


}