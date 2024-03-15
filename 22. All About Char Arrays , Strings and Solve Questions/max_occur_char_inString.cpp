#include<iostream>
using namespace std;

char get_max(string s)
{
    int arr[26]={0};
// create an array of count of characters
for(int i=0;i<s.length();i++)
    {
    char ch= s[i];
    //lowercase
        // int number=0;
        // if(ch>='a' && ch<='z')
        // {
        //   number= ch-'a';

        // }
        // // uppercase
        // else
        // {
        // number= ch-'A';
        // }
        // arr[number]++;
        int number=0;
        number= ch-'a';
        arr[number]++;

    }
// find maximum occurence
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi < arr[i])
        {
            ans=i;
            maxi=arr[i];

        }
    }

    char finalans= 'a'+ans;
    return finalans;

}
int main(){


string s;
cin>>s;

cout<<get_max(s)<<endl;

return 0;
}
