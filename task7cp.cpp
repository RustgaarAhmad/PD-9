#include <iostream>
using namespace std;
int common(string str1, string str2);
main()
{
    string str1;
    string str2;
    cout << "Enter first string :";
    cin >> str1;
    cout << "Enter second string :";
    cin >> str2;
    int result = common(str1, str2);
    cout << result;
}
int common(string str1, string str2)
{
    int co = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        for (int j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                co++;
                str2[j]='\0';
                
            }
        }
    }
    return co;
}