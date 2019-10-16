#include <iostream>

using namespace std;

int main()
{
    cout << "\n";

    int a = 10;
    int b = 20;

    cout << "Podaj ilosc wierszy: ";
    cin >> a;

    cout << "Podaj ilosc kolumn: ";
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