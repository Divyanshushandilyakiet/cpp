// check if an alphabet is a vowel or consonent
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char c;
    int lv, uv;

    cout << "Enter any alphabet==>>>";
    cin >> c;

    lv = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uv = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lv || uv)
    {
        cout << c << " is a vowel";
    }
    else
    {
        cout << c << " is a consonent";
    }

    return 0;
}
