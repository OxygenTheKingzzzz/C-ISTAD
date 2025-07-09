// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     char choice;
//     cout<<"Enter a grade(A-F):";
//     cin>>choice;
//     switch(choice){
//         case 'A':
//         cout<<"Between 90-100%";
//         break;
//         case 'B':
//         cout<<"Between 80-90%";
//         break;
//         case 'C':
//         cout<<"Between 70-80%";
//         break;
//         case 'D':
//         cout<<"Between 60-70%";
//         break;
//         case 'E':
//         cout<<"Between 50-60%";
//         break;
//         case 'F':
//         cout<<"Below 50%";
//         break;
//         default:
//         cout<<"Invalid input";
//     }
//     return 0;
// }
// int day=4;
// #include<iostream>
// using namespace std;
// int main(){
// int day;
// cout<<"Enter number 1-7:";
// cin>>day;
// switch(day){
//     case 1:
//         cout<<"Monday";
//         break;
//     case 2:
//         cout<<"Tuesday";
//         break;
//     case 3:
//         cout<<"Wednesday";
//         break;
//     case 4:
//         cout<<"Thursday";
//         break;
//     case 5:
//         cout<<"Friday";
//         break;
//     case 6:
//         cout<<"Saturday";
//         break;
//     case 7:
//         cout<<"Sunday";
//         break;
//     default:
//         cout<<"Invalid Input!!";
//         break;
// }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     float num1,num2,sum,substract,multi,divide;
//     char opt;
//     cout<<"Enter the first number:";
//     cin>>num1;
//     cout<<"Enter an operator(+,-*,/):";
//     cin>>opt;
//     cout<<"Enter second number:";
//     cin>>num2;
//     switch(opt){
//     case '+':
//         sum=num1+num2;
//         cout<<"The result is:"<<sum;
//         break;
//     case '-':
//         substract=num1-num2;
//         cout<<"The result is:"<<substract;
//         break;
//     case '*':
//         multi=num1*num2;
//         cout<<"The result is:"<<multi;
//         break;
//     case '/':
//         divide=num1/num2;
//         cout<<"The result is:"<<divide;
//         if (num2==0){
//             cout<<"Infinite";
//         }
//         break;
//     default:
//         cout<<"Invalid number!!";
//         break;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int number;
//     double temp,convert_temp;
//     cout<<"Enter a number (1-6) to select a conversion:"<<endl;
//     cout<<" 1. Celsius to Fahrenheit"<<endl;
//     cout<<" 2. Fahrenheit to Celsius"<<endl;
//     cout<<" 3. Celsius to Kelvin"<<endl;
//     cout<<" 4. Kelvin to Celsius"<<endl;
//     cout<<" 5. Fahrenheit to Kelvin"<<endl;
//     cout<<" 6. Kelvin to Fahrenheit"<<endl;
//     cin>>number;
//     if(number <1 || number >6){
//         cout<<"Invalid choice!!";
//     }
//     else{
//     cout<<"Enter the temperature:";
//     cin>>temp;
//     cout<<"----------------------------------------------------------"<<endl;
//     }
//     switch(number){
//     case 1:
//         convert_temp=(temp * 9/5) + 32;
//         cout<<"The answer of Celsius to Fahrenheit is:"<<convert_temp;
//         break;
//     case 2:
//         convert_temp= (temp - 32) * 5/9;
//         cout<<"The answer of Fahrenheit to Celsius is:"<<convert_temp;
//         break;
//     case 3:
//         convert_temp=temp + 273.15;
//         cout<<"The answer of Celsius to Kelvin is:"<<convert_temp;
//         break;
//     case 4:
//         convert_temp= temp - 273.15;
//         cout<<"The answer of Kelvin to Celsius is:"<<convert_temp;
//         break;
//     case 5:
//         convert_temp= (temp - 32) * 5/9 + 273.15;
//         cout<<"The answer of Fahrenheit to Kelvin is:"<<convert_temp;
//         break;
//     case 6:
//         convert_temp= (temp - 273.15) * 9/5 + 32;
//         cout<<"The answer of Kelvin to Fahrenheit is:"<<convert_temp;
//         break;
//     default:
//         cout<<"Invalid Input!!";
//         break;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    system("cls");
    char grade;
    cout<<"Input your grade(A,B,C,D,F):";
    cin>>grade;
    switch(grade){
        case 'A':
        cout<<"Excellent!";
            break;
        case 'B':
        cout<<"Good Job.";
            break;
        case 'C':
        cout<<"Fair Performance.";
            break;
        case 'D':
        cout<<"Needs Improvement.";
            break;
        case 'F':
        cout<<"Failed";
            break;
        default:
            cout<<"Invalid Grade.";
        break;
    }
    return 0;
}