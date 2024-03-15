#include<iostream>
using namespace std;

char tolowerCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;

    }
    else
    {
        char temp= ch-'A'+ 'a';
        return temp;

    }
}
bool check_palindrome(char a[],int n)
{
int s=0;
int e=n-1;

while(s<e)
{
    // if(a[s] != a[e])
    // {
    //     return 0;
    // }
    // else
    // {
    //     s++;
    //     e--;
    // }

// if we add the function of tolowerCase then if 
// make the all characters into lower case 
// and our program become NOT case sensitive

       if(tolowerCase(a[s]) != tolowerCase(a[e]))
    {
        return 0;
    }
    else
    {
        s++;
        e--;
    }
}
return 1;

}


int main(){

char name[20];

cout<<"Enter the string :";
cin>> name;
cout<<"The given string is ";
cout<< name;
cout<<endl;

int length=0;
for(int i=0;name[i]!='\0';i++)
{
length++;

}

cout<<"Palindrome or not : "<<check_palindrome(name,length)<<endl;

return 0;
}
