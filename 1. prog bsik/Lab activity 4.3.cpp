#include <iostream>

using namespace std;

int main() {
	int sales = 0;
	
	
	cout<<"input your income:$";
	cin>>sales;
	

	if (sales >= 50000)
	{
		cout<<"your income:$"<< 575 +(sales *.16);
	}
	
	else if (sales <50000 && sales >= 40000 ){
	
		cout<<"your income:$"<< 550+(sales*.14);
	}
	
	else if (sales <40000 && sales >= 30000 ){
	
		cout<<"your income:$"<< 525+(sales*.12);
	}
	
	else if (sales <30000 && sales >= 20000 ){
	
		cout<<"your income:$"<< 450+(sales*.9);
	}
	else if (sales <20000 && sales >= 100000 ){
	
		cout<<"your income:$"<< 450+(sales*.5);
	}
	else if (sales <10000){
	
		cout<<"your income:$"<< 400+(sales*.3);
	}
	
}
