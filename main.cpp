#include <iostream>
using namespace std;
int main()
{
   int dec = 0;
   cout << "Enter number: " << endl;
   cin >> dec;
   cout.setf(ios_base::showbase);
   cout << " Hex value of decimal number " << dec << " in hexadecimal is: " << hex << dec << endl;
}