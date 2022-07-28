/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s="akankshaARIBA";

    // converting small to capital letters
    
    for(int i=0; i<s.size();i++)
    {
        if (s[i]>=97)
        {
            s[i]= s[i]-32;
        }
        
    }
    
    cout<<s<<endl;
    
    // converting capital to small letters.
    
    for(int i=0; i<s.size();i++)
    {
        s[i]= s[i]+32;
    }
    
    cout<<s<<endl;
    
    

    return 0;
}
