

/**
 * @file program.h
 * @author Team-19
 * @brief quiz game launcher header file
 * @version 0.1
 * @date 23/05/2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __PROGRAM_H__
#define __PROGRAM_H__



/**
 * @brief Structure which will adress every question from the question bank
 * 
 */
    typedef struct qna_t
    {
    char question[100];
    char option_1[100];
    char option_2[100];
    char option_3[100];
    char option_4[100];
    char answer[10];
    } qna_t;





/**
 * @brief delay function using inbuilt time.h header file
 * 
 * @param number_of_seconds 
 */

     void time_delay(int number_of_seconds);


/**
 * @brief enumeration of return for functions
 * depicts the type of returns for functions depending on different cases
 */
    typedef enum error_t
    {  
       
        SUCCESS = 1,                           //if all operations were completed successfully
        NO_FILE = 0,                             //if the given file was not found
        NULL_PTR = -1,                          //if pointer to array was not allocated.
        PLAYER_OUT = -6

    }error_t;


extern qna_t *question_array;

/**
 * @brief reads csv file and stores data into array of structure
 * 
 * @param pointer to array of structure where questions are to be stored.
 * @param name of file to be read 
 * @return error_t 
 */

    error_t read_file(qna_t* question_array, char *file_name);

/**
 * @brief dynamically allocate memory for array.
 * 
 */

qna_t *create_question_array(const int no_of_questions);

/**
 * @brief function to start playing the game and counting score
 * 
 * @param question_array 
 * @param score 
 * @return error_t 
 */
error_t play(qna_t *question_array, char *name_of_participant, const int no_of_questions);

/**
 * @brief introduction of the quiz.
 * 
 */
int game_intro();
/**
 * @brief help function for contestants
 * 
 */
int please_help();



#endif