#include<stdio.h>
int main(){
    int arr[10], brr[10], n, m, total_sum = 0;
    
    printf("Enter the Size of the 1st array: ");
    scanf("%d", &n);
    
    printf("Enter the Size of the 2nd array: ");
    scanf("%d", &m);
    
 
    
    printf("Enter the elements of 1st array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        total_sum += arr[i];  
    }
    
    printf("Enter the elements of 2nd array: ");
    for(int i = 0; i < m; i++){
        scanf("%d", &brr[i]);
        total_sum += brr[i]; 
    }
    
    printf("Total sum of all elements: %d\n", total_sum);
    
    return 0;
}2