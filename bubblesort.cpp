#include<iostream>

void bubblesort(int A[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {2,-1,0};
    bubblesort(A, 3);
    for(int i = 0; i < 3; i++)
    {
        std::cout << A[i] << " ";
    }
}