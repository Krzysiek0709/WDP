#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int los,ile=0;
    srand(time(NULL));
    do
    {
        los=rand()%101;
        cout<<los<<endl;
        ile++;
    }while(los!=5);
    cout<<"Wylosowano "<<ile<<" razy"<<endl;
    return 0;
}
