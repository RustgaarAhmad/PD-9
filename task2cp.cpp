#include <iostream>
using namespace std;
int discount(string movies[5],float price);
main()
{
    string movies[5]= {"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    float price=500;
    int result=discount(movies,price);
    cout<<result;
}
int discount(string movies[],float price)
{
    string mN;
    int fP;
    cout<<"Enter the name of movie :";
    cin>>mN;
    for(int i=0;i<5;i++)
    {
           
        if (movies[i]==mN)
        {
            if(i%2==1)
            {
            fP=price-(price*0.05);
            }
            else 
            {
              fP=price-(price*0.10);
            }
        }
    }
        return fP;
}