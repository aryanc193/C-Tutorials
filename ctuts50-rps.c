#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int main()
{
    int p2, pntp1 = 0, pntp2 = 0;
    char p1[8], s[8], choice[1];
    char s1[8] = "Rock";
    char s2[8] = "Paper";
    char s3[8] = "Scissor";
    do
    {
        printf("\n-------------------GOOD LUCK!-------------------\n");
        printf("Rock Paper or Scissors?\n");
        scanf("%s", &p1);
        printf("Your choice was: %s\n", p1);
        p2 = generateRandomNumber(3);
        switch (p2)
        {
        case 0:
            printf("The opponent showed: %s\n", s1);
            strcpy(s, s1);
            int c1 = strcmp(p1, s);
            // printf("%d", c1);
            if (c1 == 0)
            {
                printf("\nIt's a draw\n");
            }

            else if (c1 < 0)
            {
                printf("\nYou Win!\n");
                pntp1++;
            }

            else if (c1 > 0)
            {
                printf("\nYou Lose!\n");
                pntp2++;
            }
            break;

        case 1:
            printf("The opponent showed: %s\n", s2);
            strcpy(s, s2);
            if (p1[0] == 'R')
            {
                printf("\nYou Lose!\n");
                pntp2++;
            }
            else if (p1[0] == 'P')
            {
                printf("It's a Draw");
            }
            else if (p1[0] == 'S')
            {
                printf("You Win!");
                pntp1++;
            }
            break;

        case 2:
            printf("The opponent showed: %s\n", s3);
            strcpy(s, s3);
            if (p1[0] == 'R')
            {
                printf("\nYou Win!\n");
                pntp1++;
            }
            else if (p1[0] == 'P')
            {
                printf("\nYou Lose!\n");
                pntp2++;
            }
            else if (p1[0] == 'S')
            {
                printf("\nIt's a draw\n");
            }
            break;

        default:
            break;
        }
        printf("\nPlayer 1: %d \t Player 2: %d\n", pntp1, pntp2);
        printf("\nWould you like to play again? Y or N\n");
        scanf("%s", &choice);
        if (choice[0] == 'N' || choice[0] == 'n')
        {
            goto end;
        }

    } while (choice[0] == 'Y' || choice[0] == 'y');

end:
    printf("\nThank you for playing!\n");
    return 0;
}
