#include <iostream>
using namespace std;

int square(int y);
int rectangle (int x,int y);
int triangle (int x, int y);
int circle (int y);


int main (){
	int x,y;
	
	
cout << "==================="<<"\nMENU"<< "\n===================";
cout << "\n[1] - Area of square\n";
cout << "[2] - Area of rectangle\n";
cout << "[3] - Area of triangle\n";
cout << "[4] - Area of circle\n";
cout << "[5] - Exit\n";
cout << "-------------------"<<"\nEnter your choice: ";
cin  >> x;
cout<< "\n-------------------\n";

switch (x){

	case 1:
 		square (y);
 		break;
 		
 	case 2:
 		rectangle (x,y);
 		break;
 		
 	case 3:
 		triangle (x,y);			
 		break;
 		
 	case 4:
 		circle (y);				
 	break;
 	case 5:
 		cout << "Thank you!";	
 		break;
 	default:
 		cout <<"your choice is invalid!";
 	
}
}

int square(int y){
		cout <<"AREA OF SQUARE\n";
		cout <<"-------------------\n";
		cout <<"Enter the side of the square: ";
		cin  >> y;
		cout <<"The area is " <<y*y << " sq. units";
}

int rectangle (int x, int y){
	int num [2];
		cout <<"AREA OF RECTANGLE\n";
		cout <<"-------------------\n";
		cout <<"Enter the length and width of the rectangle: ";
		for (int i=0; i<=1;i++)
		cin  >>num [i];	
		cout <<"The area is "<<num[0]*num[1]<<" sq. units";
}
int triangle (int x, int y){
	int num [2];
		cout <<"AREA OF A TRIANGLE\n";
		cout <<"-------------------\n";
		cout <<"Enter the base and width of the triangle: ";
		for (int i=0; i<=1;i++)
		cin  >>num [i];
		cout <<"The area is "<<(num[0]*num[1])/2<<" sq. units";
}
int circle (int y){
	float pi=3.14, area;
	
		cout <<"AREA OF A TRIANGLE\n";
		cout <<"-------------------\n";
		cout <<"Enter the radius of the circle: ";
		cin  >>y;
		area = pi*y*y;
		cout <<"The area is "<<float(area)<<" sq. units";	
}






