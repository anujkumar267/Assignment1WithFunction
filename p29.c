//Implement the Selection Sort, Bubble Sort and Insertion Sort.
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int a[], int n);
void selection_sort(int a[], int n);
void insertion_sort(int a[], int n);

int main()
{
    int n, choice, i;
    char ch[20];
    printf("Enter the length of the array  you want to be  sort : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Please select any option Given Below for Sorting : \n");
    while (1)
    {
        printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4.Exit the Program.\n");
        printf("\nEnter your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            bubble_sort(arr, n);
            break;
        case 2:
            selection_sort(arr, n);
            break;
        case 3:
            insertion_sort(arr, n);
            break;
        case 4:
            return 0;
        default:
            printf("\nPlease Select only 1-5 option ----\n");
        }
    }
    return 0;
}



void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After Bubble sort Elements are : ");
   for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void selection_sort(int arr[], int n)

{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After Selection sort Elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void insertion_sort(int arr[], int n)
{
    int i, j, min;
    for (i = 1; i < n; i++)
    {
        min = arr[i];
        j = i - 1;
        while (min < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = min;
    }
    printf("After Insertion sort Elements are : ");
     for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

/*
Enter the length of the array  you want to be  sort : 8   
98
35
64
25
87
32
15
47
Please select any option Given Below for Sorting : 

1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4.Exit the Program.

Enter your Choice : 1
After Bubble sort Elements are :  15  25  32  35  47  64  87  98 
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4.Exit the Program.

Enter your Choice : 2
After Selection sort Elements are :  15  25  32  35  47  64  87  98 
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4.Exit the Program.

Enter your Choice : 3
After Insertion sort Elements are :  15  25  32  35  47  64  87  98 
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4.Exit the Program.

Enter your Choice : 5

Please Select only 1-5 option ----

1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4.Exit the Program.

Enter your Choice : */