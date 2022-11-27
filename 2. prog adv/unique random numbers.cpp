#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
	int i,r,x,num[10],n;
	bool y;
	srand(time(0));
	cout << "Uniqe Numbers: ";
	
	for(i = 0; i <= 9; i++){
			
		do{
			r = (rand() % 20)+1;
			y = true;
		
				for (x=0;x<i;x++){
					if( r == num[x]){
					
						y = false;
						break;
					}
				}
			}
while(!y);{
		num[i] = r;
		}		
		cout<<r<<" ";
	}
}
