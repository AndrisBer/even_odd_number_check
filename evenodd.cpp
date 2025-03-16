#include <iostream>
using namespace std;

string even_or_odd(int n)
{
    return (n % 2 == 0) ? "Even" : "Odd";
}

int main()
{
    int number_to_check;

    while (true)
    {
        cout << "Your input >> ";
        cin >> number_to_check;

        if (number_to_check == -1)
        {
            cout << "\nClosing program...\n";
            break;
        }

        cout << even_or_odd(number_to_check) << endl;
    }

    return 0;
}