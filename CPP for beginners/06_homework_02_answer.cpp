// write a program that reads 5 numbers and print the following:
 //A) threir avarage
 //B) the sum of the first  numbers divided by sum of the last  numbers
 //C) the average of the first  numbers divided by the average of the last  numbers

 // what is the math relation between B and c ?
 // any relation between A and C ?

 
#include <iostream>
using namespace std;


int main()
{
     //A) threir avarage

        int d1,d2,d3,d4,d5;
        cin >> d1 >> d2 >> d3 >> d4 >> d5;
        // cout <<( d1 + d2 + d3 + d4 + d5) / 5  ;


     //B) the sum of the first  numbers divided by sum of the last  numbers

       // cout <<( d1 + d2 + d3) / ( d4 + d5 );

     //C) the average of the first  numbers divided by the average of the last  numbers

        // cout << (( d1 + d2 + d3 ) / 3.0 ) / (  d4 + d5) / 2.0;

    

    return 0;
}