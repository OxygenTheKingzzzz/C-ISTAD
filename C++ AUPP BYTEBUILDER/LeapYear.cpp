// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int year;
//     cout<<"Enter the year:";
//     cin>>year;
//     if( (year%4=0) && (year%!100==0) || year%400==0){
//         cout<<"It is the leap year!!";
//     }
//     else{
//         cout<<"It is not the leap year!!";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int year;
    cout<<"Enter the year:";
    cin>>year;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<year<<" is the leap year!!";
            }else{
                cout<<year<<" is not the leap year!!";
            }
        }
        else{
            cout<<year<<" is the leap year!!";
        }
    }else{
        cout<<year<<" is not the leap year!!";
    }
    return 0;
}