// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     string word;
//     cout<<"Welcome to Looping test"<<endl;
//     while(true){
//         cout<<"Enter any word:";
//         cin>>word;
//         if(word=="quite"){
//             break;
//         }
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int num,sum=0;
//     cout<<"Insert any number:";
//     cin>>num;
//     while(num>0){
//         int d=num%10;
//         sum+=d;
//         num=num/10;
//     }
//     cout<<sum;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int num,d,sum=0;
//     cout<<"Input any value:";
//     cin>>num;
//     while(num>0){
//     d=num%10;
//     sum=(sum*10)+d;
//     num=num/10;
//     }
//     cout<<sum;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int num,i=1,d=1;
//     cout<<"Enter a positive number:";
//     cin>>num;
//     while(i<=num){
//     d=d*i;
//     i++;
//     }
//     cout<<d;
//     return 0;
// }


/*Another way to loop of factorial*/
// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int num,d=1;
//     cout << "Enter a positive number: ";
//     cin >> num;
//     while(num>0) {
//         d = d *num;  // multiply current number
//         num--;        // decrease number
//     }
//     cout << "Factorial: " << d;
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num,first,last=0,d;
    cout<<"Enter a palindrome:";
    cin>>num;
    first=num;
    while(num>0){
    d=num%10;
    last=(last*10)+d;
    num=num/10;
    }
    if(first==last){
        cout<<"It is palindrome!";
    }
    else{
        cout<<"It is not palindrome!";
    }
    return 0;
}





#include<iostream>
using namespace std;    
int main(){
    system("cls");
    int num=0,input_user;
    cout<<"Enter a number you want to loop:";
    cin>>input_user;
    while(num<input_user){
        num++;
        if(num%2==0 && num!=0){
            cout<<num<<" is even"<<endl;
        }
    }
    return 0;
}



#include<iostream>
#include<cmath>
using namespace std;    
int main(){
    system("cls");
   int number,remainder,sum=0,n=0;
   cout<<"Enter a number: ";
   cin>>number;
    int original_number = number; // Store the original number for comparison later
    while(number > 0){
        n++; // Count the number of digits
         remainder = number % 10; // Get the last digit
         sum += pow(remainder, n); // Add the cube of the digit to sum
         number /= 10; // Remove the last digit
    }
    if(sum == original_number){
        cout<<original_number<<" is an Armstrong number.";
    }
    else{
        cout<<original_number<<" is not an Armstrong number.";
    }
    return 0;
}