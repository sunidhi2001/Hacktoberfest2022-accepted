#include<bits/stdc++.h>
using namespace std;

int main(){
    
    float loan_amount, rate_of_interest, duration;
    
    cout<<"Enter your Loan Amount: ";
    cin>>loan_amount;
    cout<<"Enter Annual Rate of Interest: ";
    cin>>rate_of_interest;
    cout<<"Enter Duration of EMI (in years): ";
    cin>>duration;
    
    float monthly_interest_rate = rate_of_interest/1200.0;
    float emi = loan_amount * monthly_interest_rate * pow((1.0+monthly_interest_rate), duration*12.0) / (pow((1.0+monthly_interest_rate), duration*12.0) - 1);
    
    cout<<fixed<<"You have to return total "<<emi*duration*12.0<<" in equal monthly EMI installments of "<<emi<<" for "<<duration<<" years."<<endl;
}
