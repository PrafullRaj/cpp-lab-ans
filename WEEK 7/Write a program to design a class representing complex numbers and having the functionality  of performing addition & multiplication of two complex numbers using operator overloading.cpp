#include<iostream>
using namespace std;
class Complex{
	private:
		int real, imag;
	public:
		Complex(){
			
		}
		Complex(int r, int i){
			real = r;
			imag= i;
		}
		
		Complex operator *(Complex b){
			Complex c;
			c.real = this->real * b.real;
			c.imag = this->imag * b.imag;
			return c;
		}
		
		Complex operator +(Complex b){
			Complex c;
			c.real = this->real + b.real;
			c.imag = this->imag + b.imag;
			return c;
		}
		
		void display(){
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
};


int main(){
	Complex c1(12, 10), c2(4,5), c3, c4;
	c3 = c1 + c2;
	c4 = c1 * c2;
	cout<<"The addition of two complex numbers is: "; c3.display();
	cout<<"The multiplication of two complex numbers is:  ";c4.display();
	
}
