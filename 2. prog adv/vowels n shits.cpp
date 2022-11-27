#include <iostream>
using namespace std;

int main()
{
    char line[150];
    int vowels, consonants, symbol, spaces;

    vowels =  consonants = symbol = spaces = 0;

    cout << "Enter your sentence: ";
    cin.getline(line, 150);
    for(int i = 0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
        else if(line[i]>='.'||line[i]>='!'||line[i]>='?')
        {
            ++symbol;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
      
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Symbol: " << symbol << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Words:" <<++spaces;

    return 0;
}

