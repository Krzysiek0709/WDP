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
       if(los%2==0)
       ile++;

    }while(ile!=10);

    return 0;
}
