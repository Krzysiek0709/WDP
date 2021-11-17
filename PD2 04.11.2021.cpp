#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
  int liczba, poprawna;
  srand (time(NULL));
  liczba = rand() % 100 + 1;

  do {
    printf ("Zgadnij liczbe z przedzialu 1-100\n");
    scanf ("%d",&poprawna);
    if (liczba<poprawna) printf ("Poprawna liczba jest mniejsza\n");
    else if (liczba>poprawna) printf ("Poprawna liczba jest wieksza\n");
  } while (liczba!=poprawna);

  printf ("Tak, to jest poprawna liczba");
  return 0;
}
