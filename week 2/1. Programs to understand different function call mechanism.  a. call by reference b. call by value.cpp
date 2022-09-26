/*Programs to understand different function call mechanism.*/
/* a. call by value */
#include <iostream>
using namespace std;
void swap(int x, int y, int temp);
int main()
{
int a, b;
cout << "Enter the two value a and b:" << endl;
cin >> a >> b;
cout << "Before swap, value of a :" << a << endl;
cout << "Before swap, value of b :" << b << endl;
swap(a, b);
cout << endl<< "After swap, value of a :" << a << endl;
cout << "After swap, value of b :" << b << endl;
return 0;
}
void swap(int x, int y, int temp)
{
temp = x;
x = y;
y = temp;
return;
}

/* Programs to understand different function call mechanism.*/
/* b. call by reference */

#include <iostream>
using namespace std;
void swap(int *x, int *y);
int main()
{
int a, b;
cout << "Enter the two value a and b:" << endl;
cin >> a >> b;
cout << "Before swap, value of a :" << a << endl;
cout << "Before swap, value of b :" << b << endl;
swap(&a, &b);
cout << endl<< "After swap, value of a :" << a << endl;
cout << "After swap, value of b :" << b << endl;
return 0;
}
void swap(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
return;
}
