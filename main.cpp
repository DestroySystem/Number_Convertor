#include <iostream>
using namespace std;
int Bin_To_Hex(int value)
{
    int array[10], i;
    for(i=0; value > 0; i++)
    {
        array[i] = value % 2;
        value = value / 2;
    }
    for(i = i - 1 ; i >= 0; i--)
    {
        cout << array[i];
    }
    return array[i];
}
int main()
{
   int dec = 0;
   cout << "Enter number which you want to convert: " << endl;
   cin >> dec;
   cout.setf(ios_base::showbase);
   cout << " Hexadecimal value of decimal number " << dec << " is: " << hex << dec << endl;
   cout.unsetf(ios_base::hex);
   cout.unsetf(ios_base::showbase);
   cout << " Octal value of decimal number " << dec << " is: " << oct << dec << endl;
   cout.unsetf(ios_base::oct);
   cout << " Binary value of decimal number " << dec << " is: " << Bin_To_Hex(dec) << endl;
}