// Function non return value //

// #include<iostream>
// using namespace std;
//     void myFunctionTest(){
//     cout<<"Hello Welcome Function calling"<<endl;
//     }
//     void myFunctionInputAndOutput(){
//     int id;
//     string name;
//     char gender;
//     cout<<"Input ID=";
//     cin>>id;
//     cout<<"Input Name=";
//     cin>>name;
//     cout<<"Input Gender=";
//     cin>>gender;
//     cout<<"ID="<<id<<endl;
//     cout<<"Name="<<name<<endl;
//     cout<<"Gender="<<gender<<endl;
//     }
//     int main(){
//         system("cls");
//         myFunctionTest();
//         myFunctionInputAndOutput();
//     return 0;
// }




// #include<iostream>
// using namespace std;
// void sum(){
//     int a,b;
//     cout<<"======Find sum of two Value======"<<endl;
//     cout<<"Input a:";
//     cin>>a;
//     cout<<"Input b:";
//     cin>>b;
//     int sum=a+b;
//     cout<<"Sum of a+b is:"<<sum<<endl;
// }
// void mul(){
//     int x,y;
//     cout<<"======Find multiply of two Value======"<<endl;
//     cout<<"Input x:";
//     cin>>x;
//     cout<<"Input y:";
//     cin>>y;
//     int mul=x*y;
//     cout<<"Multiply of x*y is:"<<mul<<endl;
// }
// int main(){
//     system("cls");
//     sum();
//     mul();
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void check_even_number(){
//         int num;
//         cout<<"Input number:";
//         cin>>num;
//         if (num%2==0){
//             cout<<num<<" is even number"<<endl;
//         }
//         else{
//             cout<<num<<" is not even number"<<endl;
//         }
//     } 
//     void sum_natural_number(){
//         int sum=0,i,n;
//         cout<<"Input a number of n:";
//         cin>>n;
//         for (i=1;i<=n;i++){
//             cout<<i<<" ";
//             sum+=i;
//         }
//         cout<<"\n The sum of the natural number is:"<<sum<<endl;
//     }
// int main(){
//     system("cls");
//     check_even_number();
//     sum_natural_number();
//     return 0;
// }

/*Non return function with parameter*/

// #include<iostream>
// using namespace std;
// void sum(int a, int b){
//     cout<<"=======Find the sum of two value======="<<endl;
//     int sum=a+b;
//     cout<<"Sum(a,b): "<<sum<<endl;
// }
// void mul(int a, int b){
//     cout<<"=======Find the multiple of two value======="<<endl;
//     int mul=a*b;
//     cout<<"Mul(a,b):"<<mul<<endl;
// }
// int main(){
//     system("cls");
//     int a, b;
//     cout<<"Input a value:";
//     cin>>a;
//     cout<<"Input b value:";
//     cin>>b;
//     sum(a,b); // Calling sum() function 
//     mul(a,b); // Calling mul() function
//     return 0;
// }

/*Function return value no parameter*/
// #include<iostream>
// using namespace std;
// void helloFromFunction(){
//     cout<<"Hello my first function"<<endl;
// }
// int fun2(){
//     return 100;
// }
// float fun3(){
//     float qty=10,price=12.22;
//     float total=qty*price;
//     return total;
// }
// string fun4(){
//     return "I will return string";
// }
// int main(){
//     system("cls");
//     int x2=fun2();
//     float f1=fun3();
//     string s1=fun4();
//     cout<<"fun2= "<<x2<<endl;
//     cout<<"fun3= "<<f1<<endl;
//     cout<<"fun4= "<<s1;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sum1(){
//     int a,b;
//     cout<<"==========Find sum two value=========="<<endl;
//     cout<<"Input a:";
//     cin>>a;
//     cout<<"Input b:";
//     cin>>b;
//     int sum=a+b;
//     return sum;
// }
// int mul1(){
//     int x,y;
//     cout<<"==========Find multiple two value=========="<<endl;
//     cout<<"Input x:";
//     cin>>x;
//     cout<<"Input y:";
//     cin>>y;
//     int mul=x*y;
//     return mul;
// }
// int main(){
//     system("cls");
//     int sum=sum1();
//     int mul=mul1();
//     cout<<"The answer of a+b:"<<sum<<endl;
//     cout<<"The answer of a*b:"<<mul;
//     return 0;
// }

/*Function return value has parameter*/
#include<iostream>
using namespace std;
int sum1(int para1, int para2){
    int sum=para1+para2;
    return sum;
}
int mul1(int a, int b){
    int mul=a*b;
    return mul;
}
int main(){
    system("cls");
    int a,b;
    cout<<"Input a:";
    cin>>a;
    cout<<"Input b:";
    cin>>b;
    cout<<"Sum(a,b):"<<sum1(a,b)<<endl;
    cout<<"Mul(a,b):"<<mul1(a,b);
    return 0;
}