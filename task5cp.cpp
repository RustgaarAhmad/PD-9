#include <iostream>
#include <string>
using namespace std;

bool areAllIdentical(string arr[], int size)
 {
    for (int i = 1; i < size; i++)
    {

        if (arr[i] != arr[0]) 
        {
            return false;
        }
    }
    return true;  
}

int main() 
{

    string arr[4];  
    cout << "Enter 4 elements of the array (representing slot machine outcomes): " << endl;
    for (int i = 0; i < 4; i++) 
    {
        cin >> arr[i];
    }
   
    if (areAllIdentical(arr, 4)) 
    {
        cout << "true" << endl;  
    } 
    else 
    {
        cout << "false" << endl; 
    }

    return 0;
}
