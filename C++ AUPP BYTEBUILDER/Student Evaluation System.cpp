#include<iostream>
using namespace std;
int main(){
    system("cls");
    int marks,attendance;
    cout<<"Enter your marks:";
    cin>>marks;
    cout<<"Enter your attendance percentage:";
    cin>>attendance;
    if(marks>=85){
        if(attendance>=90){
            cout<<"Excellent";
        }else{
            cout<<"Very Good";
        }
    }
    else if(marks>=70 && marks<=84){
        if(attendance>=80){
            cout<<"Good";
        }else{
            cout<<"Satisfactory";
        }
    }
    else if(marks<70){
        if(attendance>=60){
            cout<<"Need Improvement";
        }else{
            cout<<"Fail";
        }
    }
    return 0;
}