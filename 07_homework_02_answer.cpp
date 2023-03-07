// Homework2 : sort 3 numbers
// given 3 integers , sort (order) them in ascending order and print them .
// inputs
//  1 2 3 => 1 2 3
//  1 3 2 => 1 2 3 
//  2 1 3 => 1 2 3
//  2 3 1 => 1 2 3
//  3 1 2 => 1 2 3
//  3 2 1 => 1 2 3   
// do you notice there are only 6 ways to permutate 3 numbers !


   int a, b ,  c;
  cin >> a >> b >> c ; 

   if(a < b && a < c)
   {
     if( b < c)
     {
       cout << a << b << c; 
     }
      if( c < b)
     {
       cout << a << c << b; 
     }
   }

   if(b < a && b < c)
   {
     if( c < a )
     {
       cout << b << c << a; 
     }
      if( a < c)
     {
       cout << b << a << c; 
     }
   }

     if(c < b && c < a)
   {
     if( b < a )
     {
       cout << c << b << a; 
     }
      if( a < b)
     {
       cout << c << a << b; 
     }
   }
  