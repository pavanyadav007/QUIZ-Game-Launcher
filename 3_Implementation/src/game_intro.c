#include<stdio.h>
#include<stdlib.h>
#include"../inc/program.h"

/**
 * @brief introduction about the quiz game
 * @return ovoid
 */
int game_intro()
{
   system("cls || clear");
    printf("\n\n");
    printf("TEAM 19 Presents\n");
    printf("-----*****-----*****-----*****-----*****-----*****-----\n");
    printf("      |  QUIZ GAME LAUNCHER___quizes to answer  |\n");
    printf("-----*****-----*****-----*****-----*****-----*****-----\n");
    printf("\n");
    printf("_____________________________________________________________\n");
    printf("| Check out if you are smart enough to answer the questions |\n");
    printf("_____________________________________________________________\n");
    printf("\n");
    printf("You are provided with four topics and you have to select any two\n");
    printf("\n");
    printf("        Topics                  |     key     \n");
    printf("--------------------------------------------- \n");
    printf("1. Science  and technology      |     (T)     \n");
    printf("2. LTTS history                 |     (L)     \n");
    printf("3. General Knowledge            |     (G)     \n");
    printf("4. Sports                       |     (S)     \n");
    printf("\n");
    printf("*********************************\n");
    printf("| > Press S to start the game   |\n");
    printf("| > press H for help            |\n");
    printf("| > press Q to quit             |\n");
    printf("*********************************\n");
    printf("\n\n");
    return 1;
}
