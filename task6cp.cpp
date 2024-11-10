#include <iostream>
using namespace std;
void arra(int size, int num, int arr[]);
main()
{
    int size = 3;
    int num;
    int arr[size];
    cout << "Enter the array :" << endl;
    for (int a = 0; a < size; a++)
    {
        cin >> arr[a];
    }
    cout << "Enter the number of times even-odd transformation need to be done :";
    cin >> num;
    arra(size, num, arr);
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
}
void arra(int size, int num, int arr[])
{
    int j;
    for (int i = 0; i < num; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[j] % 2 == 0)
            {
                arr[j] -= 2;
            }
            else
            {
                arr[j ]+= 2;
            }
        }
    }
}