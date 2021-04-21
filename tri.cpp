// check if a triangle is scalene, isosceles or equilateral
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cout << "Input three sides of triangle==>>";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "This is a equilateral triangle";
    }
    else if (a == b || b == c || c == a)
    {

        cout << "This is a isosceles triangle";
    }
    else
    {
        cout << "This is a scalene";
    }

    return 0;
}
