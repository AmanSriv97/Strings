/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    char arr[n+1];
    
    cin>>arr;
    bool palindrome=true;
    
    for(int i=0; i<n;i++)
    {
        if (arr[i]!=arr[n-1-i])
        {
            palindrome=false;
            break;
        }
    }
    
    if(palindrome)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    
    return 0;
}
