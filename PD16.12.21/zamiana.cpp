#include <iostream>

using namespace std;


int main()
{
    char napis[50];
    int i=0;
    cout<<"Podaj napis: ";
    cin.getline(napis,50);
    while (napis[i]!='\0')
    {
        if (!isalpha(napis[i]))
            napis[i]='_';
        i++;
    }
    cout<<napis<<endl;
}
