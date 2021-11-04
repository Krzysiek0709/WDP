#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int los,ile5=0;
    srand(time(NULL));
    do
    {
        los=rand()%11;
        cout<<los<<endl;
        if(los==5)
        {
           ile5++;
           cout<<"------------\n";
        }

    }while(ile5<3);
    return 0;
}
