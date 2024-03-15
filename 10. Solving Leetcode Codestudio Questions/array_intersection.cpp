#include<iostream>
#include<stdlib.h>

using namespace std;

int intersection(int arr1[],int arr2[])
{
    printf("This is the function");
    cout<<endl;
    int n1,n2;
    n1=7;
    n2=5;
     int temp;

     for(int i=0;i<n1;i++)
     {
        int element =arr1[i];
        for(int j=0;j<n2;j++){

            // if(element<arr2[j]);
            // break;

            if(arr1[i]==arr2[j])
            {
                // printf("The intersection elements are :",arr1[i]);
               
              cout<<"The array element is "<<arr1[i]<<endl;
              arr1[i]=-345;
              break;
              
              
            }
        }
     
     }
//      return temp;
 }

int main(){

// printf("enter the array elements of first array :");
// int arr1[]={1,2,3,4,5,7,8};
// int arr2[]={6,7,3,10,3};

int arr1[]={1,2,3,4,5,6,7};
int arr2[]={3,7,10,11,12};

//  sort(arr1,7);
// sort (arr2,5);

 intersection(arr1 , arr2);

// printf("array is :",p);

 

return 0;
}
