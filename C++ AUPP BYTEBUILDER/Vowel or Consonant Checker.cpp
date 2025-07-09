#include<iostream>
using namespace std;
int main(){
    system("cls");
    char letter;
    cout<<"Please input a single lower case letter:";
    cin>>letter;
    switch(letter){
        case 'a':
            cout<<"Vowel";
            break;
        case 'e':
            cout<<"Vowel";
            break;
        case 'i':
            cout<<"Vowel";
            break;
        case 'o':
            cout<<"Vowel";
            break;
        case 'u':
            cout<<"Vowel";
            break;
        default:
        if(letter <'a' || letter>'z'){ 
            cout<<"Invalid Input";
/*letter < 'a' checks if the character is before 'a', like 'A', '1', '%', etc.
letter > 'z' checks if the character is after 'z', like '{', '~', etc.*/
        }else{
            cout<<"Consonant";
        }
        break;
    }
    return 0;
}
