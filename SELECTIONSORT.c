#include <stdio.h>
#include <time.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void reversearray(int arr[], int s, int e)
{
    int temp;
    while (s < e)
    {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
void selectionSort(long long arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        swap(&arr[min], &arr[i]);
    }
}
int main()
{
    int n;
    clock_t start, end;
    double total;
    start = clock();
    printf("Starting of the sorting alorithm, Start Time = %ld", start);
    printf("\nEnter the size of the array");
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000000;
    }
    printf("\n\nBefore sorting the array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    selectionSort(arr, n);
    printf("\nAfter sorting the array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    end = clock();
    printf("\n\nEnd of the sorting algorithm, End Time = %ld\n", end);
    total = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Total time taken by CPU: %f\n", total);
    clock_t start1, end1;
    double total1;
    start1 = clock();
    printf("\n\n\nStarting of the passing sorted array to sorting function program, Start Time = %ld\n", start1);
    printf("\nBefore sorting the array is: ");
    for (int i = 0; i < n; i++)
    {
    printf("%d ", arr[i]);
    }
    selectionSort(arr, n);
    printf("\nAfter sorting the array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    end1 = clock();
    printf("\n\nEnd of the passing sorted array to sorting function program, End Time = %ld\n", end1);
    total1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
    printf("Total time taken by CPU: %f\n", total1);
    clock_t start2, end2;
    double total2;
    start2 = clock();
    printf("\n\n\nStarting of the passing reverse array to sorting function program, Start Time = %ld\n", start2);
    reversearray(arr, 0, n - 1);
    printf("\nBefore sorting the array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    selectionSort(arr, n);
    printf("\nAfter sorting the array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    end2 = clock();
    printf("\n\nEnd of the passing reverese array to sorting function program, End Time = %ld\n", end2);
    total2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
    printf("Total time taken by CPU: %f\n", total2);
}
