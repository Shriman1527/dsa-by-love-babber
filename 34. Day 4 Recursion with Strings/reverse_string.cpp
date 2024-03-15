#include<iostream>
using namespace std;

void reverse(string& str,int i,int j)
{
    cout<<"call received for  "<< str << endl;

    //base case
    if(i>j)
    {
        return ;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    
    //recursive call
  reverse(str,i,j);

 //cout<< str << endl;


}
int main(){

string name="shriman";
int i=0;
int j=name.length()-1;

reverse(name,i,j);
cout << endl;

 cout<< name << endl;

return 0;
}
