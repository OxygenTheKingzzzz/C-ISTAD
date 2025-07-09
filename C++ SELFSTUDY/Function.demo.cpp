// #include<iostream>
// using namespace std;
// // None return function
// void test101(){
// cout<<"Welcome to C++ Function!"<<endl;
// }
// void test102(int value){
//     cout<<"Value="<<value<<endl;
// }
// void sumFun(int value1,int value2){
//     int sum=value1+value2;
//     cout<<value1<<"+"<<value2<<"="<<sum<<endl;
// }
// void getPosition(string position){
//     cout<<"I am a "<<position<<endl;
// }
// int main(){
//     system("cls");
//     test101(); // Calling function
//     test102(100);
//     sumFun(100,20);
//     getPosition("programmer");
//     return 0;
// }

#include<iostream>
using namespace std;
int getTotalscore(){
    int score1=90,score2=100,score3=80;
    int total=(score1+score2+score3);
    return total;
}
int main(){
    system("cls");
    getTotalscore(); // This wont print out anything 
    cout<<"Total score:"<<getTotalscore()<<endl;
    //or
    // int total=getTotalscore();
    // cout<<"Total score:"<<total<<endl;
    return 0;
}