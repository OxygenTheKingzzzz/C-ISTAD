#include<iostream>
using namespace std;
int main(){
    system("cls");
    int distance,age;
    bool member;
    cout<<"Enter travel distance:";
    cin>>distance;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Are you a member(1=True/0=False):";
    cin>>member;
    if(distance >500){
        if(age<18 || age>60){
            if(member==true){
                cout<<"30% discount";
            }else{
                cout<<"20% discount";
            }
        }else{
            if(member==true){
            cout<<"15% discount";
        }   else{
            cout<<"10% discount";
        }
    }
    }else{
            cout<<"No discount";
        }
        return 0;
    }
        

    