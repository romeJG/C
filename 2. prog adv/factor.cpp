#include <iostream>
using namespace std;

int main (){

int x,n,f = 1;
cout << "Enter a number : ";
cin >> n;
x=n;
while (n >1){
f *= n--;
}
cout << "the factorial of " << x << " is "<< f <<endl;
return 0;
}
