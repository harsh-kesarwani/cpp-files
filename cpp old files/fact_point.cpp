#include <iostream>
using namespace std;
int factorial (int num)
{
 if (num==1)
 return 1;
 return factorial(num-1)*num;
}
main() {
int value=0;
//int *p;
cout << "\t Recursion using Pointers";
cout << "\n\n";
cout << "Enter a Number :=> ";
cin >> value;
//p = &value;
cout << "\n";
cout <<"The factorial value of " << value
<< " is " << factorial(value) << ".";
cout << "\n\n";
}
