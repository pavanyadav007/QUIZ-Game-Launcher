/**
 * @file play.c
 * @author team 19
 * @brief program that play the game by taking correct answers and keeping the track of lives
 * @version 0.1
 * @date 2021-05-23
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#include"../inc/program.h"

/**
 * @brief 
 * 
 * @param question_array 
 * @param name_of_participant 
 * @param no_of_questions 
 * @return error_t 
 */
 error_t play(qna_t *question_array, char *name_of_participant, const int no_of_questions)
{
    char choice;
    int life = 2;                                           //initial allocation of life
    char ans[2];
    if(question_array == NULL)
    {
        return NULL_PTR;
    } 
    for (int index = 0;index < no_of_questions; index++)    //starting of individual round
    { 
        strcpy(ans,(question_array+index)->answer);
        system("cls || clear");
        printf("Name : %s\n",name_of_participant);
        printf("Lives : %d",life);
        

        printf("\n\n");

          printf("%s\n",(question_array+index)->question);    
        
          printf("%s    ",(question_array+index)->option_1);
        printf("    %s\n",(question_array+index)->option_2);
        printf("%s    ",(question_array+index)->option_3);
        printf("    %s\n",(question_array+index)->option_4);

        printf("\n Please enter option : ");
        scanf("%c",&choice);
        getchar();
        choice = toupper(choice);

         //if the answer is correct
        if(choice == ans[0])                                    
        {
            printf("\n congrats!, u r correct! The correct answer is option %s\n",(question_array+index)->answer);
            printf("Press Enter to continue ");
            getchar();    
        }
         //if the answer is incorrect and then decrease life
        else                                                    
        {
            printf("\nopps! u r  wrong!, The correct answer is option %s\n",(question_array+index)->answer);
            life--;  
            printf("Press Enter to continue ");
            getchar();
            
        }

        //checking for life
        if(life == 0)                                       
        {
            system("cls || clear");
            printf("\nsorry u are dead!, try again next time\n");
            time_delay(3);
            return PLAYER_OUT;
        }
        
    }
    return SUCCESS;
    }
