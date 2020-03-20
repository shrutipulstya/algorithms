#include<iostream>
using namespace std;

void swap(int *A, int a, int b)
{
    int temp = A[a];
    A[a] = A[b];
    A[b] = temp;
}

int partition(int *A, int start, int end)
{
    int pivot = A[end];
    int part_index = start;
    if(start < end)
    {
        for(int i = start; i < end; i++)
        {
            if(A[i] < pivot)
            {
                swap( A, i, part_index);
                part_index++;
            }
        }
        swap(A, part_index ,end);
        return part_index;

    }
}

void quicksort(int *A, int start, int end)
    {
        if(start <= end)
        {
            int part_index = partition(A,start,end);
            quicksort( A, start, part_index-1 );
            quicksort( A, part_index+1, end );
        }
    }

int  main()
{
    int A[] = {2};
    quicksort(A, 0, 1);
    for(int i =0; i < 1; i++)
    cout<<A[i]<<" ";
    return 0;
}






