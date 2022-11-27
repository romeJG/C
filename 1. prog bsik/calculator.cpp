#include <iostream>

using namespace std;

int main() {
	int o, a, b, f;
	
	cout << "[1]Addition\n";
	cout << "[2]Subtraction\n";
	cout << "[3]Multiplication\n"; 
	cout << "[4]Divition\n";
	cout << "[5]Modulo\n\n";
	
	cout <<"Pick an operation: ";
	cin >> o;					
					
	
	switch (o)
	{
	
	 case 1:
		cout <<"Enter first number: "; 
		cin >> a; 					
		cout <<"Enter your second number: ";
		cin >> b; 
	  	cout << "The sum of " << a <<" and " <<b <<" is " << a+b;
	  break;
	  case 2:
		cout <<"Enter first number: "; 
		cin >> a; 					
		cout <<"Enter your second number: ";
		cin >> b; 
	  	cout << "The difrence of " << a <<" and " <<b <<" is " << a-b;
	  break;
	  case 3:
		cout <<"Enter first number: "; 
		cin >> a; 					
		cout <<"Enter your second number: ";
		cin >> b; 
	  	cout << "The product of " << a <<" and " <<b <<" is " << a*b;
	  break;
	  case 4:
		cout <<"Enter first number: "; 
		cin >> a; 					
		cout <<"Enter your second number: ";
		cin >> b; 
	  	cout << "The quotient of " << a <<" and " <<b <<" is " << a/b << "with the remainder of: " << a%b;
	  break;
	  case 5:
		cout <<"Enter first number: "; 
		cin >> a; 					
		cout <<"Enter your second number: ";
		cin >> b; 
	  	cout << "The remainder of " << a <<" and " <<b <<" is " << a%b;
	  break;
	  default:
		cout << "\n\nNumber invalid";
	}
	
	
	return 0;
}
