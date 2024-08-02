#include <stdio.h>


int main() {

    int arr[100];
    int location, value, i,size;

    printf("enter length of array: ");
    scanf("%d",&size);
    printf("enter %d element of the array: ");
    for(i = 0;i < size;i++){
        scanf("%d",&arr[i]);
    }


printf("Enter the location to put element: ");
scanf("%d",&location);

printf("Enter Value you want to place: ");
scanf("%d",&value);


for(i = size - 1; i >= location-1;i__){
    arr[i+1] = arr[i];
    arr[location-1] = value;


    printf("The array list is\n");


    for (i = 0; i <= size; i++){
        printf(arr[i])
    }
}





    return 0;
}