#include<iostream>
using namespace std;

void merge(int *A, int first, int mid, int last)
{
    int i = first;
    int j = mid+1;
    int k = first;
    int B[k];
    while(i <= mid && j <= last)
    {
        if(A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else 
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    if(i > mid)
    {
        while(j <= last)
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    else if(j > last)
    {
        while(i <= mid)
        {
            B[k] = A[i];
            i++;
            k++;
        }
    }
    for(int k = first; k <= last; k++)
    {
        A[k] = B[k];
    }
}

void mergesort(int *A, int first, int last)
{
    if(first < last)
    {
        int mid = (first + last)/2;
        mergesort(A, first, mid);
        mergesort(A, mid+1, last);
        merge(A, first, mid, last);
    }
}

int main()
{
    int A[] = {5, 6, 2, 3, 8, 4};
    mergesort(A, 0, 5);
    for(int i = 0; i < 6; i++)
    cout<<A[i]<<" ";
    return 0;
}
