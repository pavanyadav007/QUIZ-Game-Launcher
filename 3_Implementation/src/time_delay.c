#include<time.h>

#include"../inc/program.h"

/**
 * @brief simple delay program.
 * 
 * @param number_of_seconds 
 */
void time_delay(int number_of_seconds)
{
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + number_of_seconds);
}