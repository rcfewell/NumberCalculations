#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <string> Gray (int n);

int main ()
{
  vector <string> temp;
  temp = Gray(6);
  for (int i = 0; i < temp.size(); i++)
    cout << temp[i] << endl;
  return 0;
}

vector <string> Gray (int n)
{
  vector <string> temp;
  if (n == 1)
    {
      temp.push_back ("0");
      temp.push_back ("1");
      return temp;
    }

  else
    {
      temp = Gray (n - 1);
      vector <string> Newtemp;
      for (int i = 0; i < temp.size (); i++)
	{
	  string vector1;
	  vector1 = "0" + temp[i];
	  Newtemp.push_back(vector1);
	}

      for (int i = temp.size () - 1; i >= 0; i--)
	{
	  string vector2; 
	  vector2 = "1" + temp[i];
	  Newtemp.push_back (vector2);
	}
      return Newtemp;
    }
}
	  
  

