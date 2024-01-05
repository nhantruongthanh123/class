#include <iostream>
#include <string>
using namespace std;

class book{
    public: 
    explicit book (string name)
        :coursename(name){}
    
    /*void setname(string name){
        coursename = name;
    }*/
    
    string getname(){
        return coursename;
    }
    void displaybook(){
        cout<<"This name's book is: "<<getname()<<endl;
    }
    
    private:
    string coursename;
};


int main(){
    book first("Hello world");
    book second("cr7 is boat");
    first.displaybook();
    second.displaybook();
}