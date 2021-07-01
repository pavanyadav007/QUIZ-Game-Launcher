#include<stdlib.h>

#include"../inc/program.h"

/**
 * @brief Create an array of question objects
 * @param no_of_questions 
 * @return qna_t* 
 */
qna_t *create_question_array(const int no_of_questions)
{
    return calloc(no_of_questions,sizeof(qna_t));
}
