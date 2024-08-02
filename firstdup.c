#include <stdio.h>

int main() {

    int len, element,ind;

    printf("Enter size of array: ");
    scanf("%d",&len);

   int arr[len];

    printf("enter your list items: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
ind = -1;
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i] == arr[j]){
                element = arr[j];
                ind = j;
                break;
            }

            len--;
            j--;
            
        }
        if(ind != -1){
            break;
        }
    }
printf("The first duplicate element is %d",element);



    return 0;
}