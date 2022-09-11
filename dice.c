#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(int argc, char **argv) {

    int MAX, MIN;
    
    printf("enter total roll of dice: ");
    scanf("%d", &MAX);
    printf("values on dice: ( ");

    
    for (MIN = 0; MIN < MAX; MIN++)
        printf("%d ", (rand() % 6) + 1);
    printf(")\n");
    return 0;
}