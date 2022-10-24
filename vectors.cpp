#include <iostream>
#include <vector>

using namespace std;
 int main(){
    // vector<int> *v1 = new vector<int>();  //dynamically
 vector<int> v; //statically (auto delete when scope over)
 for(int i=0; i<100; i++){
     cout<<"cap:"<<v.capacity()<<endl;
     cout<<"size"<<v.size()<<endl;
 }
 }