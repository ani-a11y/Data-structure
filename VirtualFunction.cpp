#include <iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"this is a base class show"<<endl;

    }
};
class derived : public base{
    public:
      void  show()  override{   //overriding the base function
    public:
    cout<<"this is an derived class "<<endl;
    
    }


};
int main(){
    base* ptr;
    base b;
    derived d;


     ptr=&b;
     ptr ->show();

     ptr = &d;
     ptr -> show();
     return 0;
}