#include <iostream>
using namespace std;

int main(){
	string x;
	int s;
	bool z = true;
	
	cout<<"Enter a word: ";
	
	getline(cin,x);
	
	s = x.length();
	
	for (int i = 0;i < (s / 2); i++){
		if (x[i] != x[(s - 1)-i])
			z = false;
	}
	if (z == true)
	cout<<x<<" is a palindrome."<<endl;
	
	else
	cout<<x<<" is not a palindrome.";
	
	return 0;
}

