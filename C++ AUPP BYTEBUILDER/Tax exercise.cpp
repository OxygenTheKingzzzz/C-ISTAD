#include<iostream>
using namespace std;
int main(){
    system("cls");
    double income,tax_rate;
    cout<<"Enter your net income:";
    cin>>income;
    cout<<"---------------------------------------------------"<<endl;
    if(income<500){
        cout<<"There won't be tax rate!!"<<endl;
        cout<<"Net income:"<<income<<endl;
        cout<<"Tax bill=0";
    }
    else if(income>500 && income<1000){
        tax_rate= (income*5)/100;
        cout<<"There is a 5% tax!!"<<endl;
        cout<<"Net income:"<<income<<endl;
        cout<<"Tax bill"<<tax_rate;
    }
    else{
        tax_rate= (income*10)/100;
        cout<<"There is a 10% tax!!"<<endl;
        cout<<"Net income:"<<income<<endl;
        cout<<"Tax bill:"<<tax_rate;
    }
    return 0;
}
