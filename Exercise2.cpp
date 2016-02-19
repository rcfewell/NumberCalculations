#include <iostream>
#include <cmath>
using namespace std;

long long exp (int x, int n);
long long exp2 (int x, int n);

int main ()
{
  long long x;
  long long n;
  cout << "enter an integer: " << endl;
  cin >> x, n;

  cout << "enter an exponent: " << endl;
  cin >> n;

  exp (x, n);

  cout << exp (x, n) << endl;
  cout << exp2 (x, n) << endl;
  return 0;
  
}

long long exp(int x, int n)
{
  long long temp;
  if (n == 0)
    return 1;

  if (n == 1)
    return x;

  if (n % 2 == 0)
    {
      temp =exp(x, n/2);
      return temp * temp;
    }
  temp = exp (x, (n-1)/2);
  return temp * temp * x;

}

long long exp2 (int x, int n)
{
  if (n == 0)
    return 1;

  if (n == 1)
    return x;

  if (n % 2 == 0)
      return exp(x * x, n/2);
  return exp (x * x, (n-1)/2) * x;

}
