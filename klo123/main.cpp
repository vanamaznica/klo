#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    Array<int> a;
    a.Add(10);
    a.Add(20);
    a.Add(30);

    for (int i = 0; i < a.GetSize(); i++)
        cout << a[i] << " ";
    cout << endl;

    a.InsertAt(1, 15);

    for (int i = 0; i < a.GetSize(); i++)
        cout << a[i] << " ";
    cout << endl;

    a.RemoveAt(2);

    for (int i = 0; i < a.GetSize(); i++)
        cout << a[i] << " ";
}