//B1905.090010, Mohammed AL-Jarah
#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[], int low, int high);



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

int partition (int a[], int i, int j) {
    int pivot = a[i];
    int m = i;
    int k;

    for (k = i+1; k <= j; k++){
        if(a[k] < pivot){
            m++;
            int temp = a[k];
            a[k] = a[m];
            a[m] = temp;
        }
        else{
        }
    }
    int temp = a[i];
    a[i] = a[m];
    a[m] = temp;
    return m;

}



void quicksort(int a[], int low, int high) {
    int pivotPos;
    if (low < high) {
        pivotPos = partition(a, low, high + 1);
        quicksort(a, low, pivotPos-1);
        quicksort(a, pivotPos+1, high);
    }
}