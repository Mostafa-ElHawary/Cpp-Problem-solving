#include <iostream>
using namespace std;

int main()
{

	// ( & )
	// T&T = T
	// T&F = F
	// F&F = F

	//( || )
	// T||T = T
	// T||F = T
	// F||F = F

	int a = 10, b = 20, c = 30, d = 40;

	cout << (a + b == c) << "\n";		  // true 1
	cout << (a + b + c >= 2 * d) << "\n"; // true 1 x

	// true   || false
	cout << (a > 5 || d < 30) << "\n"; // true 1

	// true   && false
	cout << (a > 5 && d < 30) << "\n"; // false 0

	// true   && true
	cout << (a <= b && b <= c) << "\n"; // true 1

	       // true && false  || true
	cout << (a > 5 && d < 30 || c - b == 10) << "\n"; // true 1

	      // true   && true  && true
	cout << (a <= b && b <= c && c <= d) << "\n"; // true 1

	       // true && false  || false || true
	cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n"; // true 1

	       // true && false  || false && true
	cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n"; // false 0

	      // true    || false   && false   || false
	cout << (a == 10 || b != 20 && c != 30 || d != 40) << "\n"; // false  x

	       // true    || false    && false   || false
	cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n"; // false

	return 0;
}
