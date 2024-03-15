#include<iostream>
using namespace std;

int  unique_occurence(int arr[],int n)
{
    int occur[10];
    for(int i=0;i<n;i++)
    { 
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        occur[i]=count-1;
    }
    for(int i=0;i<;i++)
    {
        cout<<occur[i]<<endl;

    }
}
int main(){

int num[100]={1,2,2,1,1,3};
// int num2[100]={1,2,2,1,1,3,3};

unique_occurence(num,6);

return 0;
}
