#include <iostream>
using namespace std;

class calc
{
private:
    int n1, n2;

public:
 calc()
    {
        cout << "type n1: ";
        cin >> n1;
        cout << "type n2: ";
        cin >> n2;
    }
    int sum()
    {
        return n1 + n2;
    }
     int mens()
    {
        return n1 - n2;
    }
};

int main()
{
    calc c;

    cout << "calc sum :" << c.sum()<<endl;
     cout << "calc mens :" << c.mens();
}