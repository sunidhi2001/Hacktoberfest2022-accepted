#include<iostream>
using  namespace std;
class B{
    public:
    virtual void s(){
        cout<<"This is base class";
    }
};
class D:public B{
public:
void s(){
    cout<<"this is derieved class";
    }
};
int main(){
    D d;
    B* b= &d;
    b->s();
    return 0;
}