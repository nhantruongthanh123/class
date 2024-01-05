#include <iostream>
#include <string>

using namespace std;

class book{
    public:
    explicit book(string name)
        :coursebook(name){}
    string getname(){
        return coursebook;
    }
    string displaybook(){
        cout<<"This name of book is: "<<getname()<<endl;
    }
    private:
    string coursebook;
};
