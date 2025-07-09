#include<iostream>
using namespace std;
int main(){
    system("cls");
    string barcode,name;
    float price,total,total_to_pay,discount=0;
    int quantity;
    cout<<"Enter the barcode:";
    cin>>barcode;
    cout<<"Enter the name of the product:";
    cin>>name;
    cout<<"Enter the price of the product:";
    cin>>price;
    cout<<"Enter the quantity:";
    cin>>quantity;
    total=price*quantity;
    if(total>=90){
        discount=10;
    }
    else if(total>=80 && total<90){
        discount=9;
    }
    else if(total>=70 && total<80){
        discount=8;
    }
    else if(total>=60 && total<70){
        discount=7;
    }
    else if(total>=50 &&total<60){
        discount=5;
    }
    float amount_discount=(total*discount)/100;
    total_to_pay=total-amount_discount;
    cout<<"=====Product List======"<<endl;
    cout<<"Barcode:"<<barcode<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Price:"<<price<<endl;
    cout<<"Quantity:"<<quantity<<endl;
    cout<<"Total:"<<total<<"$"<<endl;
    cout<<"Discount:"<<discount<<endl;
    cout<<"Total To Pay:"<<total_to_pay<<"$"<<endl;
    return 0;
}