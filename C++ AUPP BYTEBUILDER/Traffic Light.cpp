#include<iostream>
using namespace std;
int main(){
    system("cls");
    char signal;
    cout<<"Input the signal color (R, Y, G):";
    cin>>signal;
    switch(signal){
        case 'R':
            cout<<"Stop";
            break;
        case 'Y':
            cout<<"Yellow";
            break;
        case 'G':
            cout<<"Green";
            break;
        default:
            cout<<"Invalid Signal";
            break;
    }
    return 0;
}