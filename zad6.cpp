#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int los,ile=1,poprzednia=-1;
    srand(time(NULL));
    do
    {
        los=rand()%11;
        cout<<los<<endl;
        if(los==poprzednia)
            ile++;
        else
            ile=1;
        poprzednia=los;

    }while(ile<3);

    return 0;
}
