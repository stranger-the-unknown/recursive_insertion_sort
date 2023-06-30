#include <iostream>

using namespace std;

void recursive_insertion_sort(int A[], int n){

    if (n == 1){return;}

    recursive_insertion_sort(A, n-1);

    int key = A[n-1];
    int j = n-2;

    while(j>-1 && A[j]>key){
        A[j+1] = A[j];
        j = j-1;
    }
    A[j+1] = key;
}


int main()
{
    int X[] = {5, 2, 12, 4, 27, 3, 11, 0, -100, 1000, -5300};
    int n = sizeof(X) / sizeof(X[0]);
    recursive_insertion_sort(X, n);

    for(int i=0;i<n;i++){
        cout << X[i] << " ";
    }
    return 0;
}
