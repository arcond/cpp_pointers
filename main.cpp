#include <iostream>
#include "include/main.h"

using namespace std;

int main()
{
  // declare and initialize variables
  int number1 = 1
    , number2 = 2
    , *pnumber1
    , *pnumber2;

  // initialize ptr's
  pnumber1 = &number1; // pnumber1 now equals the address block of number1
  pnumber2 = &number2; // pnumber2 now equals the address block of number2

  // display values
  ShowStatus(number1, number2, pnumber1, pnumber2);

  // set new ptr dereferenced values
  *pnumber1 = 10; // the value in the address block of number1 is now 10 (number1 == 10)
  *pnumber2 = 20; // the value in the address block of number2 is now 10 (number2 == 20)

  // display values
  ShowStatus(number1, number2, pnumber1, pnumber2);

  // swap address blocks
  pnumber1 = pnumber2; // pnumber1 now equals the address block of number2 (since pnumber2 contained the address block of number2)
  pnumber2 = &number1; // pnumber2 now equals the address block of number1

  // display values
  ShowStatus(number1, number2, pnumber1, pnumber2);

  // increment to next address block
  pnumber1 = pnumber1++; // pnumber1 now equals the address block of number1 again

  // display values
  ShowStatus(number1, number2, pnumber1, pnumber2);

  ShowStatusAddrAddOne(number1, number2); // this will increment the values of number1 and number2 by one both in the function and the calling scope
  ShowStatus(number1, number2, pnumber1, pnumber2);

  ShowStatusPtrAddOne(pnumber1, pnumber2); // this will increment the value of number1 by two both in the function and the calling scope (since pnumber1 and pnumber2 both point to the address block of number1)
  ShowStatus(number1, number2, pnumber1, pnumber2);

  ShowStatusAddOne(number1, number2); // this will increment the value of number1 and number2 in the function but NOT the calling scope
  ShowStatus(number1, number2, pnumber1, pnumber2);

  return 0;
}

void ShowStatus(int number1, int number2, int *pnumber1, int *pnumber2)
{
  cout << "/*-----------------------------*/" << endl;
  cout << "VAR number1 value: " << number1 << endl;
  cout << "VAR number2 value: " << number2 << endl;
  cout << endl;
  cout << "PTR pnumber1 value: " << pnumber1 << endl;
  cout << "PTR pnumber1 dereferenced value: " << *pnumber1 << endl;
  cout << endl;
  cout << "PTR pnumber2 value: " << pnumber2 << endl;
  cout << "PTR pnumber2 dereferenced value: " << *pnumber2 << endl;
  cout << "/*-----------------------------*/" << endl << endl;
}

void ShowStatusAddrAddOne(int &number1, int &number2)
{
  number1 = number1++;
  number2 = number2++;
  cout << "/*-----------------------------*/" << endl;
  cout << "VAR number1 value: " << number1 << endl;
  cout << "VAR number2 value: " << number2 << endl;
  cout << "/*-----------------------------*/" << endl << endl;
}

void ShowStatusPtrAddOne(int *number1, int *number2)
{

  *number1 = (*number1)++;
  *number2 = (*number2)++;
  cout << "/*-----------------------------*/" << endl;
  cout << "PTR number1 value: " << *number1 << endl;
  cout << "PTR number2 value: " << *number2 << endl;
  cout << "/*-----------------------------*/" << endl << endl;
}

void ShowStatusAddOne(int number1, int number2)
{
  number1 = number1++;
  number2 = number2++;
  cout << "/*-----------------------------*/" << endl;
  cout << "VAR number1 value: " << number1 << endl;
  cout << "VAR number2 value: " << number2 << endl;
  cout << "/*-----------------------------*/" << endl << endl;
}
