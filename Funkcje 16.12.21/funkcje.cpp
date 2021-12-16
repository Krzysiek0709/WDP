#include <iostream>

using namespace std;
int pole(int,int);//deklaracja funkcji
int maks(int,int);
void szlaczek(int,char);
int main()
{
    int liczba1,liczba2;
    cout<<"Podaj liczbe 1: ";
    cin>>liczba1;
    cout<<"Podaj liczbe 2: ";
    cin>>liczba2;
    szlaczek(30,'-');
    cout<<"\npole="<<pole(liczba1,liczba2)<<endl;
    szlaczek(50,'=');
    cout<<"\nwieksza z liczb to:"<<maks(liczba1,liczba2)<<endl;
    szlaczek(30,'-');
    return 0;
}
int pole(int bok1,int bok2)
{
    return bok1*bok2;


}
int maks(int liczba1,int liczba2)
{
    if (liczba1>liczba2)
        return liczba1;
    return liczba2;
}
void szlaczek(int ile, char znak)
{
    for (int i=1;i<=ile;i++)
        cout<<znak;
    cout<<endl;
}
