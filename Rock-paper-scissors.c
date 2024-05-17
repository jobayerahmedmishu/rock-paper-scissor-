#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int player,computer;

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
    system("clear");
    
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
            
            system("clear");
            printf("\n\n\tPlay again\n");
            sleep(1);
            system("clear");
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
    printf("1-->Rock\n2-->Paper\n3-->scissors\n\n> ");
    scanf("%d",&player);
    if(player==1)
    {
        printf("\n\tYou : Rock\n");
    }
    else if(player==2)
    {
        printf("\n\tYou : Paper\n");
    }
    else if(player==3)
    {
        printf("\n\tYou : Scissors\n");
    }
    else
    {
        printf("\n\tInvalid input\n");
    }
}

void computer_move()
{
    computer = rand()%3+1;
    
    printf("\n\tComputer : ");
    if(computer == 1)
    {
        printf("Rock\n");
    }
    else if(computer==2)
    {
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
    if(player==1&&computer==2||player==2&&computer==3||player==3&&computer==1)
    {
        printf("You lost\n");
    }
    else if(player==2&&computer==1||player==3&&computer==2||player==1&&computer==3 )
    {
        printf("You won\n");
    }
    else
    {
        printf("No winner\n");
    }
}

