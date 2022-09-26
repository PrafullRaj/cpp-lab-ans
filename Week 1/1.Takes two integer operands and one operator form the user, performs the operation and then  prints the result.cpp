#include <iostream>
using namespace std;

int main()
{
    int a, b;

    char c;
    cout << "enter value of a ";
    cin >> a;

    cout << "enter value of b: ";

    cin >> b;

    cout << "enter the operand: ";
    cin >> c;

    switch (c)
    {

    case '+':
        cout << (a + b);

        break;

    case '-':
        cout << (a - b);

        break;

    case '*':
        cout << (a * b);

        break;

    case 'X':

        cout << (a % b);
        break;
    case '/':
        cout << (a / b);
        return 0;
    }
}
