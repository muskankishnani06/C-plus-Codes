#include <iostream>

using namespace std;

int main()
{

    int size;

    cout << "enter size of an array ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {

        cout << "arr" << i;
        cin >> arr[i];
    }

    cout << "even elements: ";

    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 2 == 0)
        {

            cout << arr[i] << " " ;
        }
    }
    return 0;
}