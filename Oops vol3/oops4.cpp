// virtual function 
#include <iostream> 
#include<vector>

using namespace std ; 
class Animal{
    public: 
   virtual void speak () {
        cout << " Animal sound : " << endl ;
    }
}; 

class Dog : public Animal {
    public: 
    void speak() {
        cout << "Bark" << endl ; 
    }

} ; 
class cat : public Animal {
    public : 
    void speak() {
        cout << "meow" << endl ;
    }
} ; 
class lion : public Animal {
    public : 
    void speak() {
        cout << "roar" << endl ;
    }
} ; 
class dinasour : public Animal {
    public : 
    void speak () {
        cout << "Grawoling" << endl ;
    }
} ; 
int main(){
    Animal *p ;
    // p = new Dog() ; 
    // p->speak();
    vector<Animal*>ans ;  
    ans.push_back(new Animal()) ; 
    ans.push_back(new Dog()) ; 
    ans.push_back(new cat()) ; 
    ans.push_back(new lion()) ; 
    ans.push_back(new dinasour()) ; 
    for(int i = 0 ; i< ans.size(); i++ ) {
        p = ans[i];
        p->speak() ; 

    }
}