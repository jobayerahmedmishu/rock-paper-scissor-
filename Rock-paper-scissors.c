#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<math.h>

#define ROCK -1
#define PAPER 0
#define SCISSOR 1

int player,computer, input;

void interface();
void player_move();
void check_win();
void computer_move();

int main()
{
    char res;
    srand(time(NULL));

    interface();
    scanf("%c",&res);
    system("cls");

    if(res == 'p')
    {
        while(1)
        {
            player_move();
            computer_move();
            check_win();

            printf("\n3");
            sleep(1);
            printf("\n2");
            sleep(1);
            printf("\n1");
            sleep(1);

            system("cls");
            printf("\n\n\tPlay again\n");
            sleep(1);
            system("cls");
        }
    }
    else if(res == 'e')
    {
        return 0;
    }
    else
    {
        printf("Invalid input");
    }
}

void interface()
{
    printf(">play\n>exit\n>");
}

void player_move()
{
    printf("1-->Rock\n2-->Scissor\n3-->Paper\n\n> ");
    scanf("%d",&input);
    if(input==1)
    {
		player = ROCK;
        printf("\n\tYou : Rock\n");
    }
    else if(input==2)
    {
		player = SCISSOR;
        printf("\n\tYou : Paper\n");
    }
    else if(input==3)
    {
		player = PAPER;
        printf("\n\tYou : Scissors\n");
    }
    else
    {
        printf("\n\tInvalid input\n");
    }
}

void computer_move()
{
    input = rand()%3+1;

    printf("\n\tComputer : ");
    if(input == 1)
    {
		computer = ROCK;
        printf("Rock\n");
    }
    else if(input==2)
    {
		computer = SCISSOR;
        printf("Paper\n");
    }
    else
    {
        printf("Scissors\n");
    }
}

void check_win()
{
    printf("\n\t");
	if(player == computer)
    {
        printf("No winner\n");
    }
	else if(player - computer == 1 || player - computer == -2)
    {
        printf("You won\n");
    }
    else
    {
		printf("You lose\n");
    }
}
