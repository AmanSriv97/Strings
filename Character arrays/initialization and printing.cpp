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
    
    // taking input
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    // also we can directly take the input if we dont have any space i.e a word
    cin>>arr;
    
    // output character array 
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    // also we can directly give output if we dont have any space i.e a word
    cout<<arr;
    
    return 0;
}
