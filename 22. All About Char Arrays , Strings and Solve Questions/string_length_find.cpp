#include<iostream>
using namespace std;

int get_length(char name[])
{
    int count=0;
    // This is how we find length of the string 
    for(int i=0; name[i] !='\0';i++)
    {
        count++;
    }

    return count;
}

void reverse_string(char name[],int n)
{
    int s=0;
    int e=n-1;

    while(s<e)
    {
        swap(name[s++],name[e--]);

    }
}
int main(){

char name[20];
cout<<"Enter your name :";
cin>> name;
cout<<"Your name is ";
cout<< name;

cout<<endl;

int length = get_length(name);
cout<<"Lenght of string is "<<length << endl;

reverse_string(name,length);
cout<<"The reverse string is "<< name<<endl;

return 0;
}
