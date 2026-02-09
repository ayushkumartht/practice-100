#include<stdio.h>
int main(){
    int i,j,n,m,a[100],min,temp;
    
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    
    printf("Type the elemnts in the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    printf("The array is : ");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    } 
    
    for(int i=0;i<n-1;i++){
        min = i;
        
    for(int j=i+1;j<n;j++){
        if(a[j] < a[min]){
            min = j;
        }
    }
        if(min != i){
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("Value of sorted aray: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
