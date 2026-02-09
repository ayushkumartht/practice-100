#include<stdio.h>
int main(){
    int arr[10], n, sum = 0;
    
    printf("Enter the size : ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("The sum of the elements: ");
    for(int i = 0; i < n; i++){
        sum += arr[i]; 
    }
    
    printf("%d", sum);
    
    return 0;
}