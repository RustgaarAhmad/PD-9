#include<iostream>
using namespace std;

main()
{
    string moves[]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string pin;
    cout << "Enter the PIN number (4 digits): ";
    cin >> pin;

    bool isValid = true;
    if (pin[0] < '0' || pin[0] > '9' || pin[1] < '0' || pin[1] > '9' || pin[2] < '0' || pin[2] > '9' || pin[3] < '0' || pin[3] > '9') 
    {
        isValid = false;
    }
    if (pin[0] == '\0' || pin[1] == '\0' || pin[2] == '\0' || pin[3] == '\0' || !isValid)
    {
        cout << "Invalid input." << endl;
        return 0;
    }
    for (int i=0; i<4; i++)
    {
        int digit = pin[i]-'0';
        int dancemoves = (digit + i) % 10;
        cout << moves[dancemoves];
        if(i != 3)
        {
            cout << ", ";
        }
    }
}