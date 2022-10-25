#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"REGULAR POLYGON PROFILE"<<endl;
    float num, side;
    cout<<"Enter the number of sides in polygon: ";
    cin>>num;
    if(num<3){
        cout<<"Invalid Polygon"<<endl;
        return 0;
    }
    cout<<"Enter the side length of the polygon: ";
    cin>>side;
    
    float ext_angle = 360.0/num;
    cout<<"Interior angle of this polygon is "<<180.0-ext_angle<<" degrees"<<endl;
    cout<<"Exterior angle of this polygon is "<<ext_angle<<" degrees"<<endl;
    cout<<"Perimeter of this polygon is "<<num*side<<" units"<<endl;
    cout<<"Area of this polygon is "<<num*side*side/(4.0*tan(M_PI/num))<<" sq.units"<<endl;
    
}
