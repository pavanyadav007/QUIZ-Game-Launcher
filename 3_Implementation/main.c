#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include "./inc/program.h"

#define USER_MAX 20
// This system can store up to number of users

typedef struct
{
    char name[10];
    char password[10];
} User;
// definition of the structure of a user storing
User list[USER_MAX];
// define a global array, type User, size is USER_MAX

char* filename = "C:\\Users\\pavan\\OneDrive\\Desktop\\New folder (2)\\user_name.txt";                         // the file path should assign in application folder while running in environverment 
// user.txt need to create a file in your application directory
// Log function
User login()
{
    char name[10];
    char password[10];
    User lg;
    printf("enter the username:");
    scanf("%s",name);
    strcpy(lg.name , name);
    printf("enter the password:");
    scanf("%s",password);
    strcpy(lg.password,password);
    return lg;
}


void writeToFile(User u)                                            // write txt file, there is a row for each user
{
    FILE *fw = fopen(filename,"a+");
    fprintf(fw,u.name);
    fprintf(fw,"\t");
    fprintf(fw,u.password);
    fprintf(fw,"\n");
}


int exist(User u)                                                       // determine whether the user exists
{
    int i;
    for(i=0; i<USER_MAX; i++)
    {
        if(0==strcmp(list[i].name ,u.name) && 0==strcmp(list[i].password ,u.password))
        {
            return 1;
        }
    }
    return -1;
}


void registerUser()                                                     //registered user
{
    char name[10];
    char password[10];
    User user;
    int i;

    printf("enter your the user_name:");
    scanf("%s",name);
    strcpy(user.name , name);
                                                                            
                                                                        // determine whether there has been a registered user
    for(i=0; i<USER_MAX; i++)
    {
        if(0==strcmp(list[i].name ,name))
        {
            printf("USER ALREADY EXIST");
            return;
        }
    }

    printf("enter your password: ");
    scanf("%s",password);
    strcpy(user.password , password);
    writeToFile(user);
}

int menu()
{
    int choice_make;
    printf("1.login\n");
    printf("2.register\n");
    printf("#.exit\n");
    printf("enter your choice_make:");
    scanf("%d",&choice_make);
    return choice_make;
}



const int number_of_ques = 5;                              // Total Number of questions per topic.

qna_t *question_array = NULL;                              // Pointer to array of questions in each questionbank.


int main()
{
    
    error_t status;                                      
    

    char round1_questions[300],round2_questions[300];
    char name_of_participant[50];
    char choice,topic_1,topic_2;
   // printf("starting program\n");

mainhome:    game_intro();
	scanf("%c",&choice);
    getchar();
    choice = toupper(choice);
    switch(choice)    
    {
        case 'S':
            system("cls || clear");
            break;
        case 'H':
            system("cls || clear");
            please_help();
            scanf("%c",&choice);
            getchar();
			choice = toupper(choice);
            if (choice == 'Y')
            {
                time_delay(2);
                goto mainhome;
            }
            else
            {
                system("cls || clear");
                return 0;
            }
            
        case 'Q':
            system("cls || clear");
            return 0;
        default:
            goto mainhome;
    }
    printf("Please enter your Name: ");


    User test[USER_MAX];                       // aunthentication_features 
    FILE *fp = fopen(filename,"r");
    int i=0;
    User u;
    if(NULL == fp)
    {
        printf("FILE NOT FOUND");
                   //file creation error message 
        return -1;
    }
    for(i=0; i<USER_MAX; i++)
    {
        char uname[10];
        char upassword[10];
        fscanf(fp,"%s%s",uname,upassword);

        strcpy(list[i].name , uname);
        strcpy(list[i].password , upassword);
    }

    int choice_make = menu();
    if(1 == choice_make)                                    //login function
    {
        system("cls");
        u=login();
        if(1 == exist(u))
        {
            printf("successfully logged in...!\n");
            time_delay(2000);  
        }
        else
        {
            printf("ENTER CORRECT USER_NAME OR PASSWORD...!\n");
            time_delay(2000);  
        }

    }
    else if(2 == choice_make)                               // registering the user
    {
        system("cls");
        registerUser();
        printf("registration completed successfully...!\n\n\n\n");
        printf("please sigb in below ...!\n");
        time_delay(2000);  
        system("cls");
        u=login();
        if(1 == exist(u))
        {
            printf("successfully logged in...!\n");
            time_delay(2000);  
        }
        else
        {
            printf("ENTER CORRECT USER_NAME OR PASSWORD...!\n");
            time_delay(2000);  
        }
    }
    else
    {
        return 0;
    }                   // ending of aunthentication_features 

    fgets(name_of_participant,50,stdin);    
    select_again:    system("cls || clear");
    printf("please Enter your two choices\n");
    printf("1. Science and Technology      |  [T]     \n");
    printf("2. LTTS history                |  [L]     \n");
    printf("3. General Knowledge           |  [G]     \n");
    printf("4. sports                      |  [S]     \n");
    printf("Enter your First Topic :");
    scanf("%c",&topic_1);
    getchar();
	topic_1 = toupper(topic_1);
    printf("Enter your Second Topic :");
    scanf("%c",&topic_2);                                       //selection of 2 topics for the quiz
    getchar();
	topic_2 = toupper(topic_2);
    
        if (topic_1 == topic_2)
        {
            printf("selection of same topics is prohibited\n");
            printf("Please select two DIFFERENT options.\n");
            printf("Press Enter to select the topics : %c\n",getchar());
            goto select_again;
        }
        else
        {
           switch (topic_1)
            {
               case'T':
                      strcpy(round1_questions,"questionbank/Science_and_Technology.csv");
                      break;
                case 'L':
                        strcpy(round1_questions,"questionbank/LTTS_Company.csv");
                      break;
                case 'G':
                        strcpy(round1_questions,"questionbank/General_Knowledge.csv") ;
                      break; 
                case 'S':
                        strcpy(round1_questions,"questionbank/sports.csv") ;
                      break; 
                default: 
                        printf(" Kindly enter a correct KEY for first topic :\n");
                        printf("%c",getchar());
                        goto select_again;
            }
            switch (topic_2)
            {
                case 'L':
                        strcpy(round2_questions,"questionbank/LTTS_Company.csv");
                        break;
                case 'S':
                        strcpy(round2_questions,"questionbank/sports.csv") ;
                        break;
                case'T':
                        strcpy(round2_questions,"questionbank/Science_and_Technology.csv");
                        break;
            
                case 'G':
                        strcpy(round2_questions,"questionbank/General_Knowledge.csv") ;
                        break; 
            
                default: 
                        printf(" Kindly enter a correct KEY for second topic :\n");
                        printf("%c",getchar());
                        time_delay(3);
                        goto select_again;
            }
        }
    
                            //starting of 1st round
            question_array = create_question_array(number_of_ques);
            status = read_file(question_array,round1_questions);
            if(status == NO_FILE)
            {
                printf("sorry! the file cant be opened\n");
                time_delay(3);
                return 0;
            }
            else if(status == NULL_PTR)
             {
                 printf("Memory allocation error\n");
               time_delay(3);
                return 0;
             }
            else
            {
                status = play(question_array,name_of_participant,number_of_ques);
                if(status == PLAYER_OUT)
                {
                    time_delay(3);
                    return 0;
                }
            }
         free(question_array);
         question_array = create_question_array(number_of_ques);
        
        system("cls || clear");
        printf("****************************************************************************\n");
        printf("brilliant, you have cleared 1st round and are appearing for the second round\n");
        printf("your score after 1st round is 100\n");
        printf("_____________________________________________________________________________\n\n");
        printf("Press Enter to continue ");
        getchar();

                    //starting of round 2
        status = read_file(question_array,round2_questions);
        if(status == NO_FILE)
        {
            printf("We cannot open the file\n");
            return 0;
        }
        else if(status == NULL_PTR)
        {
            printf("Memory allocation error\n");
            return 0;
        }
        else
        {
            status = play(question_array,name_of_participant,number_of_ques);
            if(status == PLAYER_OUT){
               
                printf("\n\n lifes over,sorry you are not qualified");
                time_delay(3);
                return 0;
            }

            system("cls || clear");
            printf("_____________________________________________________________________________________________________\n");
            printf("| congrats! you are a true champion.. you have cleared the quiz \n");
            printf("your score after round 2 is 200 \n");
            printf("you are a awarded a cash prize of $1million \n");
            printf("_____________________________________________________________________________________________________\n\n\n");
            printf("click enter to quit the program");
		    getchar();    
        }
    free(question_array);
    time_delay(3);
    return 0;
}