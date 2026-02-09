#include<stdio.h>

int main() {
    int n, i;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int smallest = arr[0];
    
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    printf("Smallest element = %d\n", smallest);
    
    return 0;
}