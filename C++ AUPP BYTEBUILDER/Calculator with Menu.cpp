#include<iostream>
using namespace std;
int main(){
    system("cls");
    int choice;
    float a,b,sum,substract,mul,divide;
    cout<<"===========================Welcome to AUPP Calculator==========================="<<endl;
    cout<<"1.ADD"<<endl;
    cout<<"2.Substract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"Please input a number(1-4):";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Input a value:";
            cin>>a;
            cout<<"Input b value:";
            cin>>b;
            sum= a+b;
            cout<<"The result of "<<a<<" + "<<b<<" is: "<<sum<<endl;
            break;
        case 2:
            cout<<"Input a value:";
            cin>>a;
            cout<<"Input b value:";
            cin>>b;
            substract=a-b;
            cout<<"The result of "<<a<<" - "<<b<<" is: "<<substract<<endl;
            break;
        case 3:
            cout<<"Input a value:";
            cin>>a;
            cout<<"Input b value:";
            cin>>b;
            mul=a*b;
            cout<<"The result of "<<a<<" * "<<b<<"is: "<<mul<<endl;
            break;
        case 4:
            cout<<"Input a value:";
            cin>>a;
            cout<<"Input b value:";
            cin>>b;
            divide=a/b;
            cout<<"The result of "<<a<<" / "<<b<<" is: "<<divide<<endl;
            break;
        default:
            cout<<"Invalid Input";
            break;
    }
    cout<<"===================================================================================";
    return 0;
}