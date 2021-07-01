/**
 * @file read_file.c
 * @author team-19
 * @brief program to read the questions 
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"../inc/program.h"

error_t read_file(qna_t *question_array,char *filename)
{
    if(question_array == NULL)              //return null ptr ENUM if the array was not initialized.
    {
        return NULL_PTR;
    } 
    FILE* fp = fopen(filename, "r");
    if (!fp)                                // return no file ENUM if the file was unable to read.
    {
        return NO_FILE;
    } 
     
    else 
    {
        
        char buffer[200];                   //buffer for fetching the file line by line
        int index=0;
        char *token;                        //token used to seperate the values in between delimeters

        //this specific loop stores the questions into an array of structures passed by the function.
        while(index <= 4)
        {
            fgets(buffer,200, fp);
            strcpy((question_array+index)->question,buffer);

            fgets(buffer,200, fp);

            token = strtok(buffer, ",");
            strcpy((question_array+index)->option_1,token);

            token = strtok(NULL, ",");
            strcpy((question_array+index)->option_2, token);

            token = strtok(NULL, ",");
            strcpy((question_array+index)->option_3,token);

            token = strtok(NULL, ",");
            strcpy((question_array+index)->option_4, token);

            fgets(buffer,200, fp);
            strcpy((question_array+index)->answer, buffer);
            
            index++;
        }    
    }
    fclose(fp);
    return SUCCESS;
}