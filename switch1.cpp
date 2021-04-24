// make a simple calvulator
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n1, n2;
    char op;
    cout << "Enter two numbers===>>>";
    cin >> n1 >> n2;

    cout << "Enter operands===>>>";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The sum is:" << n1 + n2 << endl;
        break;

    case '-':
        cout << "The subract is:" << n1 - n2 << endl;
        break;

    case '*':
        cout << "The multiplecation is:" << n1 * n2 << endl;
        break;

    case '/':
        cout << "The quotient is:" << n1 / n2 << endl;
        break;

    case '%':
        cout << "The remanider is:" << n1 % n2 << endl;
        break;

    default:
        cout << "You entered the wrong a operator" << endl;
        break;
    }
    return 0;
}
