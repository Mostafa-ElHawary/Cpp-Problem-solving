//write a program that reads an integer and print the 4th from the right side if no such digit , print 0
//input
//15 => 0
//125 => 0
//1000 => 1
//5001 => 5

#include <iostream>
using namespace std;


// int main()
// {  int num;
//     cin >> num;
//     cout << (num / 1000) % 10 << "\n";
//     return 0;
// }

// solution 2 

int main()
{
  int num;
    cin >> num;
    if(num/1000 == 0) cout << 0 ;
     cout << (num / 1000) % 10;

    return 0;
    
}