#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("This is the game where system generate a random number between 1 - 100 that youu need to guess and till you guess the correct number system  guve you some suggestion and also shows how many  time you take to the guess the number");
    srand(time(0));
        int random_number = (rand()%100)+1;
    int guessed;
        int no_of_guesses=0;
     time_t start_time, end_time;
    time(&start_time);
        do{
            printf(" Guess the number:-");
            scanf("%d",&guessed);
            {
             if(random_number<=guessed)
            {
                printf("Lower number please\n");
            }
            else if(random_number>=guessed)
            {
                printf("Higher number please\n");
            }
            else{
             printf("correct!");
            }
            no_of_guesses++;
            }
        }
           while(guessed!=random_number);
           time(&end_time);

    int total_seconds = (int)difftime(end_time, start_time);

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    printf("\nYou guessed the number in %d guesses.\n", no_of_guesses);
    printf("Time taken: %d hour(s), %d minute(s), %d second(s).\n",
           hours, minutes, seconds);
          return 0;
        }

