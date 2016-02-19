#include <iostream>
using namespace std;


struct Node
{
  int key;
  Node * next;
};

void insert(Node * & L, int k, int posn);
void print (Node * L);

int main ()
{
  Node * MyList;
  MyList = NULL;
  for (int i = 1; i <= 10; ++i)
    insert (MyList, i, i);
  print (MyList);
  insert (MyList, 15, 5);
  print (MyList);
  return 0;

}

void insert (Node * & L, int k, int posn)
{
  if (L == NULL)
    {
      L = new Node ();
      L -> key = k;
      L -> next = NULL;
    }
  else if (posn == 1)
    {
      Node * temp = new Node ();
      temp -> key = k;
      temp -> next = L;
      L = temp;
    }
  else
    insert (L -> next, k, posn - 1);
}

void print (Node * L)
{
  if (L != NULL)
    {
      cout << L -> key << ", ";
      print (L -> next);
    }
  cout << endl;
}



