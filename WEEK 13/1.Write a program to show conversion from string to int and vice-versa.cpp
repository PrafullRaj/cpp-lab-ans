#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int n, no;
    cout << "Enter input:";
    cin >> n;
    cout << "An integer value is: " << n << endl;
    stringstream ss;
    string number;
    ss << n;
    ss >> number;
    cout << "String representation of an integer value: " << number << endl;
    ss << number;
    cout << "The value of the string is: " << number << endl;
    ss >> no;
    cout << "Integer value of the string is: " << no << endl;
    return 0;
}
