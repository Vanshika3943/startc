#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw "division by zero is not posiible";
        }
        int c = a / b;
        cout << c;
    }
    catch (const char *e)
    {
        cout << "exception occur :" << e << endl;
    }
}