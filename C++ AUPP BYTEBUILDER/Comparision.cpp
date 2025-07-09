// Write a program that reads two integers and prints the larger of the two.
// - Use if or if-else statements to compare them.
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x value:";
    cin>>x;
    cout<<"Enter y value:";
    cin>>y;
    if(x>y){
        cout<<x<< " is the biggest among them!!";
    }
    else if(x<y){
        cout<<y<<" is the biggest among them!!";
    }
    else{
        cout<<"Both of them are equal!!";
    }
    return 0;
}