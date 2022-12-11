#include <iostream> 
using namespace std; 
class Study 
{ 
 const char *ptr; 
public: 
 Study() 
 { 
 ptr = new char[15]; 
 ptr = "\nLearning C++"; 
 } 
 void display() 
 { 
 cout << ptr; 
 } 
}; 
int main() 
{ 
 Study obj1; 
 obj1.display(); 
} 
