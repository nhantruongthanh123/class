#include <iostream>
#include <string>

using namespace std;

class book{
   public:
   //function set dung de stores gia tri
   void setname(string name){
      nameofbook = name;
   }
   //function get dung de truyen gia tri
   string getname(){
      return nameofbook;
   }
   void displayname(){
      cout<<"Name of book is: "<<getname();
   }

   private:
   string nameofbook;
};

int main(){
   book hi;
   string namebook;
   getline(cin, namebook);
   //hi.setname(namebook);
   hi.displayname(); 
  


}
   