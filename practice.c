#include <stdio.h>


//const int String;



int get_int(char* input) {
    int input2;

    printf("%s", input);

    scanf("%d", &input2);

return input2;
}


char get_string(char* String) {

    char string2[50];

    printf("%s", String);

    scanf("%s",&string2);

    printf("%c\n",string2);

    return *string2;
    
}





int main(void) {
//char string[50];

int age = get_int("Enter a valid age: ");

char *string = get_string("Enter a valid name: ");

printf("Your age is %i and your name is %c!\n", age, *string);

}