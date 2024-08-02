#include <stdio.h>
#include <math.h>

int height;

int get_int(char* input) {
    int input2;

    printf("%s", input);

    scanf("%d", &input2);

return input2;
}

int main(void) {


do {
    height = get_int("Height: ");
}while (height < 1 || height > 8 );

int k = 2 * height - 2;

for(int i = 0; i < height; i++){
    //printf("%i", i);
   // printf("#");
   for(int x = 0; x < k; x++){
        printf(" ");

        
   }
    k = k - 2;
    for(int j = 0; j < i+1; j++){
        //printf("%i", j);
        printf("#");
    }

   
   printf("\n");
}



    
}