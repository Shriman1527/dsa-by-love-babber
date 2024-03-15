#include<iostream>
using namespace std;
// In this code we learnes about 2 pointer approach 
// our last program is not that much faster it always crosses the 
// TLE .this program is faster than this 
int intersection(int arr1[],int arr2[])
{
    cout<<"this is function"<<endl;
    int i=0,j=0,n1,n2;
    n1=7;
    n2=5;

    while(i<n1 && j<n2){

        if(arr1[i]==arr2[j])
        {
         cout<<arr1[i]<<endl;
         i++;
         j++;
        }
        else if(arr1[i]< arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

}
int main(){

int arr1[]={1,2,3,4,5,6,7};
int arr2[]={3,7,10,11,12};



 intersection(arr1 , arr2);

return 0;
}
