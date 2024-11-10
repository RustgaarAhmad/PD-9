#include <iostream>
using namespace std;

bool containsSeven(int arr[], int size)
 {
    for (int i = 0; i < size; i++)
    {
        int num = arr[i];
        while (num > 0) 
        {
            if (num % 10 == 7)
            {
                return true;  
            }
            num /= 10;  
        }
    }
    return false;  
}

int main() 
{
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
 
    if (containsSeven(arr, size))
     {
        cout << "Boom!" << endl;  
    } 
    else 
    {
        cout << "there is no 7 in the array" << endl; 
    }

    return 0;
}
