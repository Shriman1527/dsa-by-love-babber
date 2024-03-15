#include<iostream>
using namespace std;

bool check_palindrome(string str,int s,int e)
{

//My Approach

//  //base case
//  if(s>e)
//  {
//     return 1 ;

//  }

//  if(str[s]!=str[e])
//  {
//     return 0;

//  }
//  else
//  {
//     swap(str[s++],str[e--]);

//  }
// check_palindrome(str,s,e);

// Real Approach

if(s>e)
return 1;

if(str[s]!= str[e])
{
    return 0;

}
else
{
    //Recursion Call
    
    return check_palindrome(str,s+1,e-1);


}

}
int main(){

string s="aabccdaa";

bool ans= check_palindrome(s,0,s.length()-1);

if(ans)
cout<< "yes"<< endl;
else
cout<< " no"<< endl;


return 0;
}
