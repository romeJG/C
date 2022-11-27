#include <iostream>
using namespace std;

int max(int x,int y){
	int r;
	if (x<y)
	r=y;
	else 
	r=x;
	return r;
	 
}

int main(){
	int x,y;
	cout <<"Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	cout <<	max(x,y)<<" is the greatest of the two numbers";
	
}

