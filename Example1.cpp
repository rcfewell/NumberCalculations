/*

 */
#include <iostream>
using namespace std;

int g(int N);

int main ()
{
  int x;
  cout << "Enter an integer: " << endl;
  cin >> x;

  cout << g(x) << endl;
  return 0;

}

int g(int N)
{
  if (N == 0)
    return 0;
  if (N == 1)
    return 1;
  if (N % 2 == 0)
    return g(N/2);
  else
    return g(N-1) + 1;
}
