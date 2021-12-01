zad 1.

#include <iostream>

using namespace std;

int main()
{
    int liczba;
    do
    {
        cin>>liczba;
    }
    while(liczba<-20 || liczba>20);
    cout<<"ok";
    return 0;
}

zad 2.

#include <iostream>

using namespace std;

int main()
{
    int liczba1, liczba2;
    do
    {
        cin>>liczba1>>liczba2;
        cout<<"===="<<endl;
    }while(liczba1-liczba2!=100 && liczba2-liczba1!=100);
    cout<<"ok";
    return 0;
}

zad 3.

#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cin>>liczba;
    for(int i=1;i<=liczba;i++)
    {
        if(liczba%i==0)
            cout<<i<<endl;
    }
    return 0;
}

zad 4.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int tab[15], pw10=0;
    srand(time(NULL));
    for(int i=0;i<15;i++)
    {
        tab[i]=rand()%21;
        cout<<tab[i]<<endl;
        if(tab[i]%2==0 && tab[i]>10)
        {
            pw10++;
            cout<<"===="<<endl;
        }
    }
    cout<<"pw10 = "<<pw10;
    return 0;
}

zad 5.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int liczba, i, tab[10];
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        tab[i]=rand()%61-30;
        cout<<i+1<<". "<<tab[i]<<endl;
    }
    cin>>liczba;
    for(i=0;i<10;i++)
    {
        cout<<i+1<<". "<<tab[i]+liczba<<endl;
    }
    return 0;
}

zad 6.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int i, tab[10];
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        tab[i]=rand()%31;
        cout<<i+1<<". "<<tab[i]<<endl;
    }
    for(i=0;i<10;i++)
    {
        if(tab[i]>=15)
        {
            tab[i]=1;
            cout<<i+1<<". "<<tab[i]<<endl;
        }
        else
        {
            tab[i]=0;
            cout<<i+1<<". "<<tab[i]<<endl;
        }
    }
    return 0;
}

zad 7.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int liczba1, liczba2, licznik=0;
    srand(time(NULL));
    liczba1=rand()%21;
    liczba2=rand()%21;
    cout<<liczba1<<" "<<liczba2<<endl;
    if(liczba1<=liczba2)
    {
        for(int i=liczba1;i<=liczba2;i++)
            licznik+=i;
    }
    else
    {
        for(int i=liczba2;i<=liczba1;i++)
            licznik+=i;
    }
    cout<<licznik;
    return 0;
}

zad 8.

#include <iostream>

using namespace std;

int main()
{
    int naj=0;
    for(int i=0;i*i-1<100;i++)
        if(i>naj)
            naj=i;
    cout<<naj;
    return 0;
}
zad 9 .

#include <iostream>

using namespace std;

int main()
{
  const int roz=8;
  int tab1[roz]={3,7,7,3,6,9,1,4};
  int tab2[roz]={4,3,8,9,5,3,8,5};
  int pomoc[11]={0};
  for(int i=0;i<roz;i++)cout<<tab1[1]<<" ";
  cout<<endl;
  for(int i=0;i<roz;i++)cout<<tab2[1]<<" ";
  cout<<endl;
  for(int i=0; i<roz;i++)
  {
      pomoc[tab1[i]]=1;
      for(int j=0;j<roz;j++)
        {
            if(tab1[i]==tab2[j])pomoc[tab1[i]]++;
        }
  }
  for (int i=0; i<roz; i++)
    if(pomoc[i]==1)cout<<i<<" ";
    //cout<<pomoc[i]<<" ";
  return 0;
}













zad 10.

#include <iostream>

using namespace std;

int main()
{
    int const rozmiar=10;
    int rosnacy=1;
    int tab[rozmiar]={10,25,32,41,53,64,75,87,98,99}, parzyste=0;
        for(int i=0;i<(rozmiar-1);i++)
        {
            if(tab[1]>tab[i+1])
            {
                rosnacy=0;
                break;
            }
            if(rosnacy)cout<<"ciag rosnac\n";
            else cout<<"Ciag nie jest rosnacy\n";
        }
    for(int i=0;i<rozmiar;i++)
    {
        if(tab[i]%2==0)parzyste++;
        cout<<"parzyste: "<<parzyste<<endl;
        cout<<"nieparzyste: "<<rozmiar-parzyste<<endl;
    }
    for(int i=0;i<(rozmiar-1);i++)
        tab[i]+=tab[i+1];
    for(int i=0;i<rozmiar;i++)cout<<tab[1]<<" ";

    return 0;
    }
}
