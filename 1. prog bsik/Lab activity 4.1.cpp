#include <iostream>
using namespace std;

int main() {
	int choice;
	cout<<"Select your beverage\n";
	cout<<"[1]Water\n";
	cout<<"[2]Coke\n";
	cout<<"[3]Sprite\n";
	cout<<"[4]Royal\n";
	cout<<"[5]Beer\n";
	cout<<"Select your beverage:";
		
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"Your choice is Water";
				break;
			case 2:
				cout<<"Your choice is Coke";
				break;
			case 3:
				cout<<"Your choice is Sprite";
				break;
			case 4:
				cout<<"Your choice is Royal";
				break;
			case 5:
				cout<<"Your choice is Beer";
				break;
		}
}
