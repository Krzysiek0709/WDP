#include <iostream>

using namespace std;

int main()
{
    char haslo[10];
    int i,maD=0,maM=0,maL=0;
    cout<<"podaj haslo: ";
    cin.getline(haslo,10);
    i=0;
    while(haslo[i]!='\0')i++;
    if (i<6)
    {
        cout<<"Za mala ilosc znakow w hasle\n";
        return 0;
    }
    else if (i>8)
    {
        cout<<"Zbyt duza ilosc znakow w hasle!\n";
        return 0;
    }
    for (i=0;i<8;++i)
    {
        if(isupper(haslo[i]))maD++;
        if(islower(haslo[i]))maM++;
        if(isdigit(haslo[i]))maL++;
    }


    if(maD+maM+maL<8)
        cout<<"Haslo spelnia wymagania"<<endl;

    else
        cout<<"Haslo nie spelnia wymagan"<<endl;
        return 0;


}
