#include<iostream>

using namespace std;

int main()
{

 int i = 1, j, pierwsza;

 while(i <= 200){
    pierwsza = 1;

    for(j = 2; j < i; j++){
       if(i % j == 0){
            pierwsza = 0;
       }
    }

    if(pierwsza) {
      cout << i << " ";
    }
    i++;
 }

 return 0;
}
