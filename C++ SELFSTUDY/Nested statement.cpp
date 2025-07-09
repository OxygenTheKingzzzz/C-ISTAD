// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     string name,pw;
//     cout<<"Input Name:";
//     cin>>name;
//     cout<<"Input Password:";
//     cin>>pw;
//     if(name=="koko"){
//         if(pw=="12345"){
//             cout<<endl<<"Login Successfully!!"<<endl;
//         }
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
    // string value1,value2,value3;
    // cout<<"Input value 1:";
    // cin>>value1;
    // cout<<"Input value 2:";
    // cin>>value2;
    // cout<<"Input value 3:";
    // cin>>value3;
    // if(value1=="12345"){
    //     if(value2=="koko"){
    //         if(value3=="kirito"){
    //             cout<<"Hello Welcome!!"<<endl;
    //         }
    //     }
    //     else{
    //         cout<<"Exit code for value 2";
    //     }
    // }
    // else{
    //     cout<<"Exit code for value 1";
    // }
    // return 0;
#include <iostream>
using namespace std;
int main(){
    int age;
    bool isHoliday;
    
    cout << "Enter age: ";
    cin >> age;
    
    cout << "Is it a holiday? (1 for Yes, 0 for No): ";
    cin >> isHoliday;

    int price;

    if (age <= 12) {
        if (isHoliday) {
            price = 5;
        } else {
            price = 7;
        }
    } else if (age >= 13 && age <= 17) {
        if (isHoliday) {
            price = 8;
        } else {
            price = 10;
        }
    } else { // Adult
        if (age >= 60) {
            price = 6;
        } else {
            price = 12;
        }
    }

    cout << "Ticket Price: $" << price << endl;

    return 0;
}