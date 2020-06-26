#include<iostream>
using namespace std;

//heapify function will create a max heap
void Maxheapify(int A[], int n,int i)
{
    int temp;
    int largest = i;
    int left = 2*i + 1 ;                    //index starts from 0 not 1. hence, 2*i + 1 is left.
    int right = 2*i + 2;
    if(left < n && A[left] > A[largest])
    {
        largest = left;
    }
    if(right < n && A[right] > A[largest])
    {
        largest = right;    
    }
    if(largest != i)
    {   //swap A[i] and largest
        temp = A[i];  
        A[i] = A[largest];
        A[largest] = temp;
        Maxheapify(A,n,largest);
    }
}

void heapsort(int A[],int n)
{
    int temp;
    for(int i = n/2 -1 ; i >= 0; i--)
    {
        Maxheapify(A,n,i);
    }
    for(int i = n -1; i >= 0; i--)
    {
        //swap A[1] and A[n]
        temp = A[0];
        A[0] = A[i];
        A[i] = temp;
        Maxheapify(A,i,0); 
    }
}

int main()
{
    int i;
    int A[] = {20,60,40,50,10,30};
    int n = 6;
    heapsort(A,n);
    for( i = 0; i < n; i++)
    {
        cout << A[i]<<" ";
    }
    return 0;
}