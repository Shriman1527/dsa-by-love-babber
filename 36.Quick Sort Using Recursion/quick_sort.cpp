#include<iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        // if(arr[i]<=pivot)
        if(arr[i]<pivot)
        {
            cnt++;

        }
    }

    // place pivot at right place 
    int pivotIndex = s+cnt ;

    swap(arr[pivotIndex ], arr[s]);

    // left and right wala part sambhal lete hai 
    int i=s , j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;

        }

        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;

        }


       
    }
    return pivotIndex;



}
void Quick_Sort(int arr[],int s ,int e)
{
// base case 
if(s>=e)
return ;

// partition karenge
int p= partition(arr,s,e);

// left part sort 
Quick_Sort(arr,s,p-1);



// right part sort 
Quick_Sort(arr,p+1,e);


}

int main(){
int arr[5]={2,4,1,6,9};
int n=5;

Quick_Sort(arr,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<arr[i] <<" ";

}
cout<<endl;

return 0;
}
