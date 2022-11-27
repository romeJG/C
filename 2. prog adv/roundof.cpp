#include <iostream>
#include <math.h>
using namespace std;

int round (float num){

if( (num + 0.5) >= (int(num) + 1) )
num=ceil(num);
else
num=floor(num);

return num;
}


int main() {
	
	float x;
	cout << "Enter a number to be rounded of: ";
	cin  >>  x;
	cout <<"Round off value: "<<round (x);
	return 0;
}
