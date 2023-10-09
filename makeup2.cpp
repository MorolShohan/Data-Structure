#include <bits/stdc++.h>
using namespace std;

void countCharacterType(string str)
{

    int vowels = 0, consonant = 0, spaces = 0,
        digit = 0;

    for (int i = 0; i < str.length(); i++) {

        char ch = str[i];

        if ( (ch >= 'a' && ch <= 'z') ||
              (ch >= 'A' && ch <= 'Z') ) {

            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonant++;
        }
        else if (ch >= '0' && ch <= '9')
            digit++;
        else
            spaces++;
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonant: " << consonant << endl;
    cout << "Digit: " << digit << endl;
    cout << "space: " << spaces << endl;
}

int main()
{
    string numbers[5];
    cout<<"Enter your information: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>numbers[i];


    }

    cout<<"The numbers are: ";
    for (int n = 0; n < 5; ++n) {
        //numbers.countCharacterType();
    }

    return 0;

     string str = "Munim aiub student 256";
    countCharacterType(str);
    return 0;

}

