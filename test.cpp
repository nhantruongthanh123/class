#include <iostream>
#include <string>
#include "gradebook.h"

using namespace std;

int main(){
    gradebook first("The daily work in the farm.");
    gradebook second("Goat cr7 is the best player in the world.");
    first.display();
    second.display();
    return 0;
}