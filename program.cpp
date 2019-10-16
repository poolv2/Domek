#include <iostream>

using namespace std;

int drawRoof(int x, int y)
{
    return 0;
}

int main()
{
    cout << "\n";

    int a = 10;
    int b = 20;

    cout << "Podaj wysokosc domu: ";
    cin >> a;

    cout << "Podaj szerokosc domu: ";
    cin >> b;

    cout << "\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    cout << "Hea" << endl;
    cout << "\n";
    return 0;
}