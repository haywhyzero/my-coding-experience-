#include <stdio.h>
#include <conio.h>


void missingele(int *arr1,int *arr2, int size){
    int i, sum=0;
    for(i=0;i<size; i++){
        sum = sum + arr1[i] - arr2[i];
    }
    printf("The missing elsment is %d",sum);
}

int main(){
    
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,1,0,5};

    int size = sizeof(arr1) / sizeof(arr1[0]);

    missingele(arr1,arr2,size);


    getch();

}
