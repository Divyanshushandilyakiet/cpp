// Check weather the alphabets are vowels or consontent
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char ap;

    cout << "Enter an alphabet:";
    cin >> ap;

    switch (ap)
    {
    case 'a':
        cout << "This is a vowel" << endl;
        break;

    case 'e':
        cout << "This is a vowel" << endl;
        break;

    case 'i':
        cout << "This is a vowel" << endl;
        break;

    case 'o':
        cout << "This is a vowel" << endl;
        break;

    case 'u':
        cout << "This is a vowel" << endl;
        break;

    case 'A':
        cout << "This is a vowel" << endl;
        break;

    case 'E':
        cout << "This is a vowel" << endl;
        break;

    case 'I':
        cout << "This is a vowel" << endl;
        break;

    case 'O':
        cout << "This is a vowel" << endl;
        break;

    case 'U':
        cout << "This is a vowel" << endl;
        break;

    default:
        cout << "This is a consonent" << endl;
        break;
    }
    return 0;
}
