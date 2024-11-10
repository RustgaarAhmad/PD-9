#include<iostream>
using namespace std;

int time(string colors[], int numcolors)
{
    int totaltime;
    totaltime =numcolors*2 ; // for coloring each square

    for(int i =1; i<numcolors; i++)
    {
        if(colors[i]!=colors[i-1])
        {
            totaltime += 1;
        }
    }
    return totaltime;
}
main()
{
    int numcolors;
    cout << "Enter the number of color changes in the patern: ";
    cin >> numcolors;

    string colors[numcolors];
    cout << "Enter "<<numcolors<<" colors of the pattern, 1 per line: "<<endl;
    for(int i = 0; i<numcolors; i++)
    {
        cin >> colors[i];
    }

    int result = time(colors,numcolors);
    cout << "Total time required: "<< result << " seconds"<<endl;

}