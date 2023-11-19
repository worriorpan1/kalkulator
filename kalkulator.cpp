#include <iostream>
using namespace std;

int main() {
  float liczba = 0, wynik = 0;
  char znak;
  cout << "Podaj liczbe: " <<endl;
  cin >> liczba;
  wynik = liczba;
  while (znak != '=')
  {
  cout << "Podaj znak działania jakie chesz wykonać( +, -, *, /, =): " << endl;
  cin >> znak;
  if (znak == '=')
  {
    cout << "Wynik działania to: " << wynik;
  }
  else
  {
  cout << "Podaj liczbe: " << endl;
  cin >> liczba;
    switch (znak)
    {
    case '+':
      wynik = wynik + liczba;
      break;
    case '-':
      wynik = wynik - liczba;
      break;
    case '*':
      wynik = wynik * liczba;
      break;
    case '/':
      wynik = wynik / liczba;
      break;
    default:
      break;
    }
    }
  };
  
}
