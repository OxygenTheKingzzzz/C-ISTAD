#include<iostream>
#include<cmath>
using namespace std;
int main(){
    system("cls");
    float a,b,c,delta,x1,x2,x,y;
    cout<<"Enter a value:";
    cin>>a;
    cout<<"Enter b value:";
    cin>>b;
    cout<<"Enter c value:";
    cin>>c;
    delta= pow(b,2)-4*(a*c);
    if(delta>0){
    x1=(-b+sqrt(delta))/2;
    x2=(-b-sqrt(delta))/2;
    cout<<"The value of x1="<<x1<<endl;
    cout<<"The value of x2="<<x2;
    }
    else if(delta==0){
    x=-b/(2*a);
    cout<<"The value of x="<<x;
    }
    else if(delta<0){
        x1=-b/2*a;
        y=sqrt(-delta)/2*a;
        // if(a<0){
        //     y=-y
        // }
        cout<<"The value of x1="<<x1<<"+"<<y<<"i"<<endl;
        cout<<"The value of x1="<<x1<<"-"<<y<<"i"<<endl;
    }
    return 0;
}