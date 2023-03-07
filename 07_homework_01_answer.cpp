// Homework 1
// red 2 integers A,B  and print based on following cases :
//   if both are odd print their product  A*B 
//   if both are even print their product  A/B 
//   if the first is odd and the second is even then find their sum  A+B
//   if the first is even and the second is odd then find their sum  A-B


  int num1 ; 
  int num2 ;
  cin >> num1 >> num2 ;

  if( num1 % 2 != 0 && num2 % 2 != 0  )
    cout << num1 * num2 ;
  else if( num1 % 2 == 0 && num2 % 2 == 0  )
    cout << num1 / num2 ;
  else if( num1 % 2 != 0 && num2 % 2 == 0  )
    cout << num1 + num2 ;
   else if( num1 % 2 == 0 && num2 % 2 != 0  )
    cout << num1 - num2 ;
  else  cout << "nums is error";