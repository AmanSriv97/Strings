/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s= "aribaansari";
    
    int arr[26];
    int count=0;
    int max=0;
    int index =-1;
    
    
    for(int i=0; i<26;i++)
    {
        arr[i]=0;
    }
    
    for(int i=0; i<26;i++)
    {
        arr[s[i]-'a']++;
    }
    
    for(int i=0; i<26;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    
    cout<< max <<endl << char(index+97);
    
    
    
    
    
    
    
    return 0;
}
