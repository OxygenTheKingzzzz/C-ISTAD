#include<iostream>
using namespace std;
int main(){
    system("cls");
    int n;
    int total=0;
    double result;
    cout<<"Enter a number:";
    cin>>n;
    result= n*(n+1)/2;
    cout<<"Sum using Gauss's formula:"<<result<<endl;
    int i=1;
    while(i<=n){
    total+=i;
    i++;
}
    cout<<"Sum of the while loop:"<<total<<endl;  
    return 0;
}