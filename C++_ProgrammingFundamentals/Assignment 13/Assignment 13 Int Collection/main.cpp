//Assignment 13 - IntCollectionMain
//Made by: CS 110B Max Luttrell
//Modified by: JoseGonzalez

#include <iostream>
#include "IntCollection.h"

using namespace std;


int main()
{
  IntCollection c;

  c.add(45);
  c.add(-210);
  c.add(77);
  c.add(2);
  c.add(-21);
  c.add(42);
  c.add(7);
  
  IntCollection b;
  IntCollection a;
  a= b = c;
  IntCollection d;

  d.add(45);
  d.add(-210);
  d.add(77);
  d.add(2);
  d.add(-21);
  d.add(42);
  d.add(7);
  d.add(20);

  cout << "\nc: ";
  for (int i = 0; i < c.getSize(); i++)
  {
    cout << c.get(i) << endl;
  }

  cout << "\nb: ";
  for (int i = 0; i < b.getSize(); i++)
  {
      cout << b.get(i) << endl;
  }
  cout << "\na: ";
  for (int i = 0; i < a.getSize(); i++)
  {
      cout << a.get(i) << endl;
  }
  cout << "\nd: ";
  for (int i = 0; i < d.getSize(); i++)
  {
      cout << d.get(i) << endl;
  }

  cout << "We will now check to see if d is exactly as c: " << endl;
  if (d == c) {
      cout << "d is exactly the same as c";
  }
  else {
      cout << "d is not exactly the same as c" << endl;
  }

  d << 5000000;
  cout << "\nd: ";
  for (int i = 0; i < d.getSize(); i++)
  {
      cout << d.get(i) << endl;
  }
  return 0;
}

/*
[jgonz337@hills ~]$ ./a.out

c: 45
-210
77
2
-21
42
7

b: 45
-210
77
2
-21
42
7

a: 45
-210
77
2
-21
42
7

d: 45
-210
77
2
-21
42
7
20
We will now check to see if d is exactly as c:
d is not exactly the same as c

d: 45
-210
77
2
-21
42
7
20
5000000
*/