#include<iostream>
using namespace std;
int main(){
    system("cls");
    float gpa;
    int serviceHours;
    cout<<"Enter your GPA(0-4):";
    cin>>gpa;
    cout<<"Enter your service hours:";
    cin>>serviceHours;
    if(gpa>=3.9 && serviceHours >=100){
        cout<<"Summa Cum Laude";
    }
    else if(gpa>=3.7 && serviceHours>=75){
        cout<<"Magna Cum Laude";
    }
    else if(gpa>=3.5 &&serviceHours>=50){
        cout<<"Cum Laude";
    }
    else{
        cout<<"No Honors";
    }
    return 0;
}