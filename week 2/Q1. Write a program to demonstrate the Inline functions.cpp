/*Write a program to demonstrate the Inline functions.*/
/* Add the two numbers.*/
#include <iostream>
using namespace std;
inline int Add_Number(int x, int y)
{
return x + y;
}
int main()
{
int a, b;
cout << "Enter two number:\n";
cin >> a >> b;
cout << "Sum of two number is:" << Add_Number(a, b);
return 0;
}
