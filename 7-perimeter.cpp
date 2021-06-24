#include<iostream>

using namespace std;

int main()
{
  float l, b, perimeter;
  cout << "Length: ";
  cin >> l;
  cout << "Breadth: ";
  cin >> b;

  perimeter = 2 * (l+b);

  cout << "Perimeter = " << perimeter << endl;


}