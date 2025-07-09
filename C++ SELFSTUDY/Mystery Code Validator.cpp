#include<iostream>
using namespace std;
int main(){
    system("cls");
    int code,first,second,third,fourth;
    cout<<"Enter the 4-digit code:";
    cin>>code;
    if(code<1000 || code>9999){
        cout<<"Error!!";
        return 0;
    }
    first=(code/1000);
    second=(code/100)%10;
    third=(code/100)%10;
    fourth=code%10;
    if(first%2==1){
        if(second%2==0 && second>5){
            if(third==fourth){
                cout<<"Access Granted";
            }else{
                cout<<"Access Denied";
            }
        }
    }
    if(first%2==0){
        if(second<4){
            int sum=third+fourth;
            if(sum%2==0){
                cout<<"Access Granted";
            }
        }else{
            cout<<"Access Denied";
            }
        
    }
    else{
        switch(third){
            case 0:
            case 2:
                if(fourth!=7){
                cout<<"Access Granted";
                }
                break;
            case 4:
            case 6:
                if(second==fourth){
                    cout<<"Access Denied";
                }
                break;
            default:
                cout<<"Access Denied";
                break;
        }
    }
    return 0;
}