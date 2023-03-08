// write a program htar reads 2 numbers a , b adn divide them (a/b) , but prints only the fraction part
// e.g for inputs 201 and 25 print 0.04
// - notice: 201 / 25 = 8.04
//  we only want the fraction part : 0.4



#include <iostream>

using namespace std;

int main()
{
    
    double a, b;
	cin>>a>>b;

	double result = a/b;

    // cout << "result is " << result << "\n "; // 8.04
     //cout << (int)result; // make custing => 8
  	 cout<< result - (int)result; // to get fraction part => 0.04

	return 0;
}
