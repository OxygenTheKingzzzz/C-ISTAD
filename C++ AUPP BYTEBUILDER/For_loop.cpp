// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         cout<<(i)<<" ";
//     }
//     for (int i=1;i<=n;i+=2){
//         cout<<(i)<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int num,result=1;
//     cout<<"Enter a positive number:";
//     cin>>num;
//     for (int i=1; i<=num;i++){
//         result*=i;
//     }
//      cout<<num<<"!= "<<result<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int num,result;
//     cout<<"Enter a positive number:";
//     cin>>num;
//     for (int i=1;i<=10;i++){
//         result=num*i;
//         cout<<num<<"x"<<i<<"="<<result<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int num,result=0;
//     cout<<"Enter a positive number:";
//     cin>>num;
//     for (int i=1;i<=num;i++){
//         result+=i;
//         cout<<i;
//         if(i<num){
//             cout<<"+";
//         }
//     }
//      cout<<"= "<<result<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int num,result=1;
//     cout<<"Enter a positive number:";
//     cin>>num;
//     cout<<num<<"!= ";
//     for (int i=num; i>=1;i--){
//         result*=i;
//         cout<<i;
//         if(i>1){
//             cout<<"*";
//         }
//     }
//     cout<<"="<<result;     
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    system("cls");
    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    // Count trailing zeros without computing the full factorial
    int count = 0;
    for (int i = 5; num / i >= 1; i *= 5) {
        count += num / i; // Add the number of multiples of i to count
        cout<<num<<endl;
    }

    cout << num << "! has " << count << " trailing zeros." << endl;
    return 0;
}
