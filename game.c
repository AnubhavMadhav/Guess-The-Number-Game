#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{   
    int number, guess, nguesses=0;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The number is %d", number);
    
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);

        if(guess>number){
            printf("HINT: Guessed a lower number!! \n");
        }
        else if (guess<number)
        {
            printf("HINT: Guessed a higher number!! \n");
        }
        else{
            printf("Correct!! You guessed it in %d attempts.\n", nguesses);
        }
        nguesses++;
    } while(guess!=number);
    
   
}
