#include <iostream>
#include <string>
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
using namespace std;

class gradebook{
    public:
    explicit gradebook(string);
    
    string getname();
    void display();

    private:
    void setname(string);
    string coursename;
};

#endif