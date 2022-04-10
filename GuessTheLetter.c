#include <stdio.h>
#include <stdlib.h>
int main()
{
    int players;
    int i=1;
    char guessedletter;
    char enterednumber;
    char gld;
    printf("Enter how many player plays this game(At most 9):");
    scanf("%d",&players);
    if(players <1 || players > 9)
    {
        printf("Please enter a number between 1 and 9!");
        scanf("%d",&players);
    }
   
    printf("Enter guessed letter:");
    scanf(" %c",&guessedletter);
    while(!(( guessedletter <= 90  && guessedletter >= 65) || (guessedletter <= 122 && guessedletter >= 97)))
    {
        printf("Please enter a letter!");
        scanf(" %c", &guessedletter);
    } 
    do
        {
        printf("Player%d, Enter your guess:\n",i);
        scanf(" %c",&enterednumber);
    while(!(( enterednumber <= 90  && enterednumber >= 65) || (enterednumber <= 122 && enterednumber >= 97)))
    {
        printf("Please enter a letter!");
        scanf(" %c", &enterednumber);
    } 
        
        printf("Is your guess greater,lesser or direct answer:\n");
        printf("-G/g: Greater\n");
        printf("-L/l: Lesser\n");
        printf("-D/d: Direct hit\n");
        scanf(" %c",&gld);
        while(!(gld== 'G' || gld == 'g' || gld == 'L' || gld == 'l' || gld=='D' || gld == 'd'))
    {
        printf("Invalid Value! Try Again!");
        scanf(" %c", &gld);
    } 
        switch(gld){
            case 'G':
            case 'g':
                if(enterednumber>guessedletter){
                    printf("Yes! Player%d's letter is greater than guessed letter\n",i);
                }
                else{

                    printf("No! Player%d's letter is not greater than guessed letter\n",i);
                }
                break;
            case 'l':
            case 'L':
                if(enterednumber<guessedletter){
                    printf("Yes! Player%d's letter is lesser than guessed letter\n",i);
                }
                else{

                    printf("No! Player%d's letter is not lesser than guessed letter\n",i);
                }
                break;
            case 'd':
            case 'D':
                if(enterednumber==guessedletter){
                    printf("Player%d guessed right letter. It is %c\n",i,enterednumber);
                }
                else{
                        printf("Wrong guees\n");
                }
                break;
                }
                




        i++;
        }
        while(i<=players);





    

    return 0;
}

