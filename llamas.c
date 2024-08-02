//#include <cs50.h>
#include <stdio.h>

// Create a get_int function to make i/o easy

int get_float(char* input) {
    float input2;

    printf("%s", input);

    scanf("%f", &input2);

return input2;
}

//Main

int main(void)
{
    float start;
    float end;
    int years = -1;

    // TODO: Prompt for start size
    do {
        start = get_float("Start size: ");
    }
    while(start < 9);


    // TODO: Prompt for end size
    do {
        end = get_float("End size: ");
    }
    while(end < start);


    // TODO: Calculate number of years until we reach threshold

int new = 0;
/***
while(new < end) {

    //double newborns = (double)start + ((double)start/3.0);
    //double death = newborns - (newborns/4);
    //newborns = death;
    double newstart = (double) start + ((double) start/12.0);
    start = newstart;
    printf("newstart: %.2f\n", newstart);

   // printf("Start: %i  newborns: %f   Death: %f\n", start, newborns, death);
    new++;
    years += 1;
}
**/
    int ans;
do
{
    double newstart = start / 12.0;
    double sstart = start + newstart;
    start = sstart;
    //printf("newstart: %.2f and start: %f and sstart: %f\n", newstart,start,sstart);
    ans = (int) sstart;
    //printf("answer: %i\n", ans);

    years ++;
    //new++;
} while (ans < end);



    // TODO: Print number of years
    if (years == 0){
        years += 1;
        printf("Years: %i\n", years);
    } else {
        printf("Years: %i\n", years);
    }

    


}
