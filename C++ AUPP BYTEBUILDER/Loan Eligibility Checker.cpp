#include<iostream>
using namespace std;
int main(){
    system("cls");
    float income;
    string jobType;
    int creditScore;
    cout<<"Enter your income:";
    cin>>income;
    cout<<"Enter your job type(permanent/temporary job):";
    cin.ignore();
    getline(cin,jobType);
    cout<<"Enter your credit score:";
    cin>>creditScore;
    if(income>=3000){
        if(jobType=="permanent"){
            if(creditScore>=700){
                cout<<"Loan Approved";
            }else{
                cout<<"Check Credit Score";
            }
        }
        if(jobType=="temporary job"){
            if(creditScore>=750){
                cout<<"Loan Approved with Condition";
            }else{
                cout<<"Loan Rejected";
            }
        }
    }
    else{
        cout<<"Income too low";
    }
    return 0;
}