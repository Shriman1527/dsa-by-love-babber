#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;

            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else
            {
                return ;
            }

        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }

    void deletes(){
        if(size==0)
        {
            cout<<"Noting to delete"<<endl;
            return ;
        }

        //take last ele to first index 
        arr[1]=arr[size];

        //remove last element 
        size--;

        //Take root node to its correct position
        int i=1;
        while(i<size)
        {
            int leftIndex=2*i;
            int rightIndex=2*i+1;

            if(leftIndex<size && arr[i]<arr[leftIndex])
            {
               swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex] )
            {
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else
            {
                return ;
            }
        }

    }

   

};

 void heapify(int arr[],int n,int i){
        int  largest=i;
        int left=2*i;
        int right=2*i+1;

        //Yaha par ek bat dyaname rakhna hai ki 
        //jab 0 based indexing ho to < chalata hai 
        // par 1 based mai <=n likhana hai 

        if(left<=n && arr[largest]<arr[left])
        {
            largest=left;
        }
        if(right<=n && arr[largest]<arr[right])
        {
            largest=right;

        }
        if(largest!=i)
        {
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);

        }

    }

    void heapSort(int arr[],int n)
    {
        int size=n;
        while(size>1)
        {
            //step 1 -> swap 
            swap(arr[size],arr[1]);

           
            size--;

            //step 2
            heapify(arr,size,1);


            
        }

    }
int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    cout<<endl;
    h.deletes();
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;


    //heap creation
    for(int i=n/2;i>0;i--)
    {
       heapify(arr,n,i);

    }

    cout<<"Printing the array"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";

    }

    //heap sort
    heapSort(arr,n);
    cout<<"Printing the array(Heap sort)"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";

    }

    cout<<"Using Priority Queue HEre"<<endl;



//Using STL min heap and max heap

    //max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Element at Top"<<pq.top()<<endl; //5
    pq.pop();
    cout<<"Element at Top"<<pq.top()<<endl; //4
    cout<<"Size is "<<pq.size()<<endl;
    if(pq.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }


    //min heap
    priority_queue<int,vector<int>, greater<int> > minheap;
    
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<<"Element at Top"<<minheap.top()<<endl; //2
    minheap.pop();
    cout<<"Element at Top"<<minheap.top()<<endl; //3
    cout<<"Size is "<<minheap.size()<<endl;
    if(minheap.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }






return 0;
}
