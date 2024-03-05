#include <iostream>
using namespace std;

int main()
{
    char c; 
    bool ischar;
    int isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;
    ischar = ((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
    if(ischar)
    {
        //lower case vowel
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        //upper case vowel
        isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
        // if 
        if(isLowercaseVowel || isUppercaseVowel)
            cout << c << " is a vowel." << endl;
        else
            cout << c << " is a consonant." << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }

    return 0;
}