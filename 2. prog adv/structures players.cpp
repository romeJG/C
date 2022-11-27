#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <stdlib.h>	

using namespace std;

struct game{
	int age;
	char nickname[50];
	int score1;
	int score2;
};

int avg (int x);

int main()
{
	int z,y, ave[5],i=0;
	char ch,choice;
	game player[5];
	for(int l=0; l<5; l++)
	{
	player[l].age=0;
	player[l].score1=0;
	player[l].score2=0;
	}
	
	
	
	do 
	{
		system ("cls");
	cout << "======================================" << endl;
	cout << "                MENU" << endl;
	cout << "======================================" << endl;
	
	cout << endl << endl;
	cout << "1. Add record" << endl;
	cout << "2. View player records" << endl;
	cout << "3. Compute for the average" << endl;
	cout << "4. Show the player(s) who gets the max average" << endl;
	cout << "5. Show the player(s) who gets the min average" << endl;
	cout << "6. Exit" << endl;
	
	cout << endl << endl;
	
	cout << "Please choose a number from the following choices: ";
	cin >> choice;				// inputs the choice of the user
	
	switch (choice){
		case '1':									// case 1 lets the user enter a record of a player
			cout << endl << endl;
			
				if (i<5){							// filter if the user exceeded five(5) players
				cout << "Please enter your record" << endl << endl;				
					cout << "PLAYER " << (i+1) << endl;
					
					cout << "Nickname: ";
					cin >> player[i].nickname,50;		//stores  nickname
		
					cout << "Age: ";					//stores age
					cin>> player[i].age;
					
					cout << "Best Score 1: ";			//stores score 1
					cin >> player[i].score1;
					
					cout << "Best Score 2: ";			//stores score 2
					cin >> player[i].score2;
					
					cout << endl;
					i++;
				
				cout << "Would you like to choose again? (y/n)";
					cin >> ch;}
					else{
					cout<<"Five Players Only"<< endl;
					system ("pause");}
					
				system("CLS");
		break;
		case '2':										//case 2 prints out the records of the players
					cout << endl << endl;
					cout<< setw(10) << "Player #"
						<< setw(30) << "Nickname"
						<< setw(10) << "Age"
						<< setw(15) << "Score1"
						<< setw(15) << "Score2";
						
					cout.setf(ios::fixed);
					cout.setf(ios::showpoint);
					cout.precision(2);
					
					for(y=0; y<5; y++)
					{
						cout << endl;
						cout<< setw(10) << y+1
							<< setw(30) << player[y].nickname
							<< setw(10) << player[y].age
							<< setw(15) << player[y].score1
							<< setw(15) << player[y].score2;
					}
				cout << endl << endl;
				cout << "Would you like to choose again? (y/n)";
					cin >> ch;
					system("CLS");
		break;
		case '3':									//case 3 computes the average(score1+score2/2) of each players
			cout << endl << endl;
			cout<< setw(10) << "Player Name" << setw(15) << "Average"<<endl;
			for(y=0; y<5; y++)
			{
				cout<< setw(10) << player[y].nickname;
				
					ave[y]=(player[y].score1+player[y].score2)/2;	
				
				cout <<setw(15)<< ave[y] << endl;
			}
			
			cout << endl << endl;
				cout << "Would you like to choose again? (y/n)";
					cin >> ch;
			system("CLS");			
		break;
		case '4':											//finds the highest average
		int f, max ,m;
		for(y=0; y<5; y++)                            //gets all the average of all players
			{			
				ave[y]=(player[y].score1+player[y].score2)/2;
			}
			max = ave[0];
		for(f=1; f < 5; f++)
		{
		
			if(ave[f]>max){
			
				m=f;
			}
		}
		cout <<endl<<endl<< "The player who got the highest average is " << player[m].nickname<<endl;
		
		cout << endl << endl;
				cout << "Would you like to choose again? (y/n)";
					cin >> ch;
			system("CLS");	
		break;
		case '5':											//finds the lowest average
		int t,min,g,h;
		for(y=0; y<5; y++)                            //gets all the average of all players
			{			
				ave[y]=(player[y].score1+player[y].score2)/2;
			}
			for (h=0;h<5;h++){
				if (ave[h]=0){
					ave[h]=1929391;
				}
			}
		min = ave[5];
			for (t=5;t>1;t--){
				if (ave[t]<min){
					g=t;
					
					
				}
			}
			cout << endl << endl << "The player who got the lowest average is "<< player[g].nickname<<endl;
			for (h=0;h<5;h++){
				if (ave[h]=1929391){
					ave[h]=0;
				}
			}
		cout << endl << endl;
				cout << "Would you like to choose again? (y/n)";
					cin >> ch;
			system("CLS");	
    	
		break;
		
		case '6':
			return (0);
		 
		 default:
		 	cout << endl <<endl<<"invalid choice!";
		 	cout << endl << endl << "Would you like to choose again? (y/n)";
					cin >> ch;
					
		}
	} while (ch == 'y' || ch == 'Y'|| ch== '1');
	
	
	return 0;
}


