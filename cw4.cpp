#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int los,czy0=0,czy10=0;
    srand(time(NULL));
    do
    {
        los=rand()%11;
        cout<<los<<endl;
        if(los==0){czy0=1;cout<<"------------\n";}
        if(los==0){czy10=1;cout<<"------------\n";}
    }while(!(czy0==1 && czy0==1));

    return 0;
}
