
#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[], int low, int high);

//O(n^2) -> worst case 
//Divide and conquer algorithm.
//pivot = Ref point


void main() {

    int i, num;

    printf("enter the number of the elements: ");
    scanf("%d", &num);
    int a[num];
    printf("\nenter the elements:\n");
    for (i = 0; i < num; i++)
        scanf("%d", &a[i]);
    quicksort(a, 0, num - 1);

    printf("\n the elements after sorting are: ");
    for (i = 0; i < num; i++){
        printf("%d  ", a[i]);
    }
}

void quicksort(int a[], int low, int high) { //start and end index
    int pivotPos;
    if (low < high) {
        pivotPos = partition(a, low, high + 1); //Pivot divides array into 2 halves. Left are smaller right are bigger in each iteration.--Return index of pivot item
        quicksort(a, low, pivotPos-1);//recursvely sort the two partition after divided by pivot
        quicksort(a, pivotPos+1, high);
    }
}

int partition (int a[], int start, int end) {
    int pivot = a[start]; // pivot is lowest array element
    int pivotInd = start; // we will scan all list from start
    int k;

    for (k = start+1; k <= end; k++){ // j is high index.
        if(a[k] < pivot){ //if element less than pivot,swap them.
            pivotInd++; // increase the first index
            int temp = a[k];
            a[k] = a[pivotInd];
            a[pivotInd] = temp;
        }
        else{
        }
    }
    int temp = a[start]; //swap pivot with element at a[pivotIndex}
    a[start] = a[pivotInd];
    a[pivotInd] = temp;
    return pivotInd;
}

//Burak Kepüç - B1805.090083



