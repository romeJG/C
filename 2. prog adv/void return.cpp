#include<iostream>
#include <stdlib.h>	
using namespace std;

struct Product{
	int M;
	int H;
	int D;
	int C;
	int MC;
} P;

void AddItem(int inp,int u,Product &P){//do this 

	switch (inp){
		
		case 1:
			for (u<u-1;u--;)
				P.M++;				//u times siya mag iincriment
			break;
		case 2:
			for (u<u-1;u--;)
				P.H++; 	
			break;
		case 3:
			for (u<u-1;u--;)
				P.D++; 	
			break;
		case 4:
			for (u<u-1;u--;)
				P.C++; 	
			break;
		case 5:
			for (u<u-1;u--;)
				P.MC++; 	
			break;
		
	}
	


}

void RemoveItem(int inp,int u,Product &P){//do this 
	int z;
	switch (inp){
		
		case 1:
			z=P.M;
			for (u<u-1;u--;)
				P.M--; 	
			if (P.M<0){
			cout << "Inventory Error"<<endl;
			P.M=z;system ("pause");
		}
	
			break;
		case 2:
			z=P.H;
			for (u<u-1;u--;)
				P.H--; 	
			if (P.H<0){
			cout << "Inventory Error"<<endl;
			P.H=z;system ("pause");
		}
	
		break;
		case 3:
			z=P.D;
			for (u<u-1;u--;)
				P.D--; 	
			if (P.D<0){
			cout << "Inventory Error"<<endl;
			P.D=z;system ("pause");
		}
		
			break;
		case 4:
			z=P.C;
			for (u<u-1;u--;)
				P.C--; 	
			if (P.C<0){
			cout << "Inventory Error"<<endl;
			P.C=z;system ("pause");
		}	
		
			break;
		case 5:
			z=P.MC;
			for (u<u-1;u--;)
				P.MC--; 	
			if (P.MC<0){
			cout << "Inventory Error"<<endl;
			P.MC=z;
			system ("pause");
		}	
			break;
		
	}
}

main(){
int opt,inp,u;

P.M=50;
P.H=50;
P.D=50;
P.C=50;
P.MC=50;

do{
cout<<"\n\nIdentification Number\tProduct\t\tQuantity\n";
cout<<"\t1\t\tMotherboards\t"<<P.M<<"\n";
cout<<"\t2\t\tHard Disk\t"<<P.H<<"\n";
cout<<"\t3\t\tDiskette\t"<<P.D<<"\n";
cout<<"\t4\t\tCompact Disk\t"<<P.C<<"\n";
cout<<"\t5\t\tMemory Cards\t"<<P.MC<<"\n";
cout<<"Choices:";
cout<<"\n1 - Add Item";
cout<<"\n2 - Remove Item";
cout<<"\n3 - Quit";
cout<<"\nChoose an operation to perform(1-3): ";
cin>>opt;
switch(opt){
	case 1: //do this 
		cout<<"Enter the identification number of the item you wish to add(1-5): ";
		cin>>inp;
		cout<<"Number of units to be added: ";
		cin>>u;
		AddItem	(inp,u,P);
		system ("cls");
	break;
	case 2: 
		cout<<"Enter the identification number of the item you wish to remove(1-5): ";
		cin>>inp;
		cout<<"Number of units to be removed: ";
		cin>>u;
		RemoveItem(inp,u,P);
	system ("cls");
	break;
case 3: //do this 
cout << "Thank you for using my program";

return 0;
default: //do this 
cout << "You have entered a wrong input!"<<endl;

system ("pause");
system ("cls");




}
}
while(opt!=3);

}

