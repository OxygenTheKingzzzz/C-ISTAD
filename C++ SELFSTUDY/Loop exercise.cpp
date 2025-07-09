#include<iostream>
#include<cmath>
using namespace std;
int main(){
    system("cls");
    /*Show and sum natural number using loop*/
    // int sum=0;
    // for(int i=1;i<=10;i++){
    //     sum=sum+i;
    // }
    // cout<<"The sum of the first 10 nature number is:"<<sum<<endl;

    /*Sum digit natural number*/
    // int sum=0,number;
    // cout<<"Input a positive number:";
    // cin>>number;
    // if(number<0){
    //     cout<<"Error!! Number cannot be negative!! Please try again"<<endl;
    // }else{
    //     for(int i=1;i<=number;i++){
    //         cout<<i<<" ";
    //         sum=sum+i;
    //     }
    //     cout<<"="<<sum;
    // }

    /*Sum digit natural number*/
    // int number,sum_digit=0;
    // cout<<"Input positive number:";
    // cin>>number;
    // if(number<0){
    //     cout<<"Number is negative!! Please try again!!"<<endl;
    // }
    // else{
    //     while(number>0){
    //         sum_digit=sum_digit+(number%10); //add last digit
    //         number=number/10;          //Remove last digit
    //     }
    //     cout<<"The sum of digit number is:"<<sum_digit<<endl;
    // }
    
    /*Find factorial*/
    // int number,multi=1;
    // cout<<"Input positive number:";
    // cin>>number;
    // if(number<0){
    //     cout<<"Number is negative!! Please try again!"<<endl;
    // }
    // else{
    //     for(int i=1;i<=number;i++){
    //         multi=multi*i;
    // }
    // cout<<"Factorial of "<<number<<" is:"<<multi<<endl;
    //     }
    
    /*Reverse number*/
    // int number,new_number=0;
    // cout<<"Input number you want to reverse:";
    // cin>>number;
    // if(number<0){
    //     cout<<"Number is negative!! Please try again!!"<<endl;
    // }
    // else{
    //     while(number>0){
    //         new_number=(new_number*10)+(number%10);
    //         number=number/10;
    //     }
    // }
    // cout<<"The result of the reverse number is:"<<new_number<<endl;

    /*Sum series*/
    int number,sum1=0,sum2=0,sum3=0;
    float sum4=0;
    cout<<"Input n value:";
    cin>>number;
    for(int i=1;i<=number;i++){
    sum1=sum1+(2*i+1);
    sum2=sum2+(2*i);
    sum3=sum3+(2*i-1);
    sum4=sum4+(1/pow(i,i));
    }
    cout<<"3+5+7+...+2n+1="<<sum1<<endl;
    cout<<"2+4+6+...+2n="<<sum2<<endl;
    cout<<"1+3+5+...+2n-1="<<sum3<<endl;
    cout<<"1+1.1^1+1/2^2+...+1/n^n="<<sum4<<endl;
    return 0;
}