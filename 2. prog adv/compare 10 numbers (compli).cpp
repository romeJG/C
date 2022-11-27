#include <iostream>
using namespace std;

int main(){
	
	int i, num[10], ave = 0 , min , max , sub = 0;
	cout<<"Enter Ten Numbers: ";
	for(i=0; i < 10; i++){
		cin>>num[i];
	}{
		min = num[0];
		max = num[0];
	for(i=0; i < 10; i++){
		sub = num[i];
		if( sub < min)
			min = sub;
		
		if( sub > max)
			max = sub;
}}
	for(i=0; i < 10; i++){
		ave+=num[i];
	}
		ave = ave / 10;
	cout<<"ave : "<<ave<<endl;
	cout<<"max : "<<max<<endl;
	cout<<"min : "<<min;

}

