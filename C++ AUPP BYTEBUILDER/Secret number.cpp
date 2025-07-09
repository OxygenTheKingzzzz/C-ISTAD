#include<iostream>
using namespace std;
int main(){
    system("cls");
    int secret_number=95,guess;
    while(true){
        cout<<"Guess the secret number:";
        cin>>guess;
        if(guess < secret_number){
        cout<<"Too low! Please try again."<<endl;
        }else if(guess > secret_number){
        cout<<"Too high! Please try again."<<endl;
        }else{
        cout<<"Congratulations! You got it right."<<endl;
        break;
        }
    }
    return 0;
}