#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j,n,max=a[0][0],min=a[0][0];

    cout<<endl<<"Enter Size : ";
    cin>>n;
    
    cout<<endl<<"Enter numbers :";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            max=a[i][j];
            else if(a[i][j]<min)
            min=a[i][j];
        }
    }

    cout<<endl<<"Max no in array : "<<max;
    cout<<endl<<"Min no in array : "<<min;

    return 0;
}