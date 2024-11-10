#include <iostream>
using namespace std;

char inputArray[100]; 
int length;           


int calculateLength(char arr[])
 {
    int len = 0;
    while (arr[len] != '\0')
     {
        len++;
    }
    return len;
}


bool isLengthEvenOrOdd()
 {
    if (length % 2 == 0)
     {
        return true;  
    }
    return false;  
}

int main()
 {

    cout << "Enter a String: ";
    cin >> inputArray;  

   
    length = calculateLength(inputArray);

  
    if (isLengthEvenOrOdd())
     {
        cout << "true" << endl; 
    } 
    else
     {
        cout << "false" << endl; 
    }

    return 0;
}
