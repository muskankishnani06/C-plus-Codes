#include <iostream>

using namespace std;

int main()
{
    int first, last;

    cout << "enter first year ";
    cin >> first;

    cout << "enter last year ";
    cin >> last;

    cout << "the array is ";

    for (int i = first; i <= last; i++)
    {

        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {

            cout << i << " ";
        }
    }

    return 0;
}