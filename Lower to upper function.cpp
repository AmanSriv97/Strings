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
    string s= "aman";
    
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    
    cout<<s<<endl;
    
    return 0;
}
