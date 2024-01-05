#include <iostream>
#include <string>
#include "gradebook.h"
using namespace std;

void gradebook::setname(string name) {
    if (name.size()<25) coursename = name;
    else {coursename = name.substr(0,25);
    cout<<"This name book has over 25 characters."<<endl;}
}

void gradebook::display(){
    cout<<"This name of book is: "<<getname()<<endl;
}
string gradebook::getname(){
    return coursename;
}
gradebook::gradebook(string name){
    setname(name);
}