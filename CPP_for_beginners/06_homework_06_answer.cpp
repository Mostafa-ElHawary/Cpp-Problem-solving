// we know n % m computes the remainder of division 
// write a program that reads 2 integers and print such reminder without using the modulus operator %
// e.g for inputs 27 and 12 => output 3
// remember in math : 27% 12 = 3

#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    cout << n1 - ( n1 / n2) * n2 ;

    return 0;
    

}
