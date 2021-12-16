#include <iostream>
#include<ctime>

using namespace std;

void losuj(int[],int,int);
void wypisz(int [],int);
int suma(int[],int);
int czyRosnacy(int [],int);
int main()
{
    const int rozmiar=10;
    int tab[rozmiar];
    losuj(tab,rozmiar,20);
    wypisz(tab,rozmiar);
    cout<<"\nSuma elementow tablicy: "<<suma(tab,rozmiar)<<endl;
    if (czyRosnacy(tab,rozmiar))
        cout<<"roznacy\n";
    else
        cout<<"nie jest roznacy";
    return 0;
}
void losuj(int tab[],int rozmiar,int koniec)
{
    srand(time(NULL));
    for(int i=0;i<rozmiar;i++)
        tab[i]=rand()%(koniec+1);
}
void wypisz(int tab[],int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
        cout<<tab[i]<<" ";
    cout<<endl;
}
int suma(int tab[],int rozmiar)
{
    int wynik=0;
    for(int i=0;i<rozmiar;i++)
        wynik+=tab[i];
    return wynik;

}
int czyRosnacy(int tab[],int rozmiar)
{
    for(int i=0;i<(rozmiar-1);i++)
        if(tab[i]>=tab[i+1])
           return 0;
    return 1;
}
