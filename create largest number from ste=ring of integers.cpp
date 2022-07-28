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
    string s= "4684864998484";
    
    // sort the string from decreasing to increasing
    
    sort(s.begin(),s.end(),greater<int>());
    
    cout<<s;
    
    //transform(s.begin(),s.end(),s.begin(), ::toupper);
    
    //cout<<s<<endl;
    
    return 0;
}
