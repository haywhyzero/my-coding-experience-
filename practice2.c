#include <stdio.h>

/***

// This program prints grid of # in nth terms;


int get_size(void);

void print_grid(int size);

int main(void) {
    
    int n = get_size();

    print_grid(n);

   
}



int get_size(void) {

int n;

    do {
            printf("enter grid number: ");
            scanf("%d", &n);
            

    }

    while (n < 1);

    return n;
}

void print_grid(int size) {

for(int i = 0; i < size; i++ ) {

    for(int j = 0; j < size; j++){
        printf("#");
    }

    printf("\n");
}

}

**/


int main(void){


int number_illamas;
int xyears = 0;
int ypopulation;
printf("Enter number of illamas: ");
scanf("%i", &number_illamas);
printf("Enter certain population: ");
scanf("%i", &ypopulation);
while (number_illamas < ypopulation){

    number_illamas += number_illamas / 12;

    xyears += 1;
}

printf("Number of years is: %i ", xyears);

}