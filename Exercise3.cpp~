#include <iostream>
using namespace std;

int f(int n);

int main ()
{
  int n;
  cout << "enter an integer: " << endl;
  cin >> n;
  cout << f(n) << endl;
  return 0;

}

int f(int n)
{
  if (n == 1) return 0;

  else if (n % 2 == 0) return 1 + f(n/2);
  else return 2 + f((n-1) / 2);
}
