#include<iostream>
using namespace std;

void row_sum(int arr[][3],int row ,int col)
{
   
    for(int row=0;row<3;row++)
{
     int  sum=0;
    
    for(int col=0;col<3;col++)
    {
       
       sum=sum+arr[row][col];
    }
    cout<<"The sum of "<< row << "row is "<<sum<<endl;
}
}

void col_sum(int arr[][3],int row,int col)
{
    for(int col=0;col<3;col++)
{
     int  sum=0;
    
    for(int row=0;row<3;row++)
    {
       
       sum=sum+arr[row][col];
    }
    cout<<"The sum of "<< col << "column is "<<sum<<endl;
}  
}

int largetstRowSum(int arr[][3],int row,int col)
{
    int maxi= INT8_MIN ;
    int rowIndex=-1;

      for(int row=0;row<3;row++)
{
     int  sum=0;
    
    for(int col=0;col<3;col++)
    {
       
       sum=sum+arr[row][col];
    }
  if(sum> maxi)
  {
    maxi=sum;
    rowIndex=row;

  }
}
cout<<"The maximumsum is"<<maxi<<endl;

return rowIndex;


}
int main(){


int arr[3][3];

for(int row=0;row<3;row++)
{
    for(int col=0;col<3;col++)
    {
        cin >> arr[row][col];

    }
}
cout << endl;

for(int row=0;row<3;row++)
{
    for(int col=0;col<3;col++)
    {
        cout << arr[row][col]<< " ";

        
    }
    cout<<endl;
}

row_sum(arr, 3,3);
col_sum(arr,3,3);
int index = largetstRowSum(arr,3,3);
cout<<"max row is "<< index << endl;


return 0;
}
