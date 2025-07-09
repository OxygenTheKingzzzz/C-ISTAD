// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
    //do while loop
    // int pw=12345;
    // do{
    //     cout<<"Enter your password:";
    //     cin>>pw;
    //     if(pw!=12345){
    //         cout<<"Try again!!"<<endl;
    //     }
    // } while (pw!=12345);
    // cout<<"The password is correct!!"<<endl;
    //while loop
//     cout<<"Enter your password:";
//         cin>>pw;
//         while(pw!=12345){
//             cout<<"Try again"<<endl;
//             cout<<"Enter your password:";
//             cin>>pw;
//         }
//         cout<<"The password is correct!!"<<endl;
//     return 0;
// string password="12345678";
// string inputPassword;
// do{
// cout<<"Enter the password:";
// cin>>inputPassword;
// if(inputPassword==password){
//     cout<<"Correct!!"<<endl;
// }
// else{
//     cout<<"Incorrect! Please try again."<<endl;
// }
// }while(inputPassword!=password);
// return 0;
// }
// Ask the user to enter a number. Use a do-while loop to keep asking for a number until they enter a positive value.
// - After they enter a positive number, print "Thank you!"








// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     do
//     {
//     cout<<"Enter a positive number:";
//     cin>>x;
//     if(x<0){
//         cout<<"Try again!!"<<endl;
//     }
//     } while (x<0);
//     cout<<"Thank you!!"<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;    
// int main(){
//     system("cls");
//     int n;
//     do{
//     cout<<"Can you be my girlfriend?(0 for no 1 for yes):";
//     cin>>n;
//     cout<<"Do you have any bad background(0 for no 1 for yes)?";
//     cin>>n;
//     }while(n!=1);
//     cout<<"You are not my type!!"<<endl;
//     return 0;
// }
    
    
// #include<iostream>
// using namespace std;            
// int main(){
//     system("cls");
//     int n=10,i;
//     do{
//         cout<<"Enter a number:";
//          cin>>i;
//          i++;
//          cout<<i<<endl;
//     }while(i<=n);
//     cout<<i<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;    
// int main(){
//     system("cls");
//     int number, digit_count = 0;
//     cout<<"Enter a number:";
//     cin>>number; 
//     do{
//         number /= 10; 
//         digit_count++; 
//     }while(number>0);
//     cout<<"The number of digits are: "<<digit_count<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    system("cls");
    int number,sum=0,d;
    cout<<"Enter a number:";
    cin>>number;
    do{
        d=number%10;
        sum=sum*10+d;
        number/=10;
    }while(number>0);
    cout<<"The reversed digits are: "<<sum<<endl;
    return 0;
}