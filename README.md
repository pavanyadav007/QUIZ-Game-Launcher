# SDLC TEAM 19(GENESIS)
# QUIZ Game Launcher

A fun quizing game designed using C Programming consisting of different topics. Only requirement is to achieve a minimum score to pass the quiz.

![](https://github.com/GENESIS2021Q1/sdlc-team-19/blob/main/images/intro2.png)
![](https://github.com/GENESIS2021Q1/sdlc-team-19/blob/main/images/intro1.png)

## Steps to test your quizing knowledge
Follow the steps below to download the program, and play the **quiz game launcher**
- Once the repository is public, clone or fork the project
- Open the 3_Implementation folder inside the **sdlc-team-19**
- For Windows Users, type "cmd" in the address bar where the folder is opened in your local machine.

- For Linux Users, Right Click on the "3_Implementation folder" and click on "Open in Terminal"
- This will open the command prompt with the current folder as its working directory
- Type "make" in the command prompt
- Once the files are compiled, type "make run".
- The game will start after the above instructions
- Read the details displayed on the screen and proceed accordingly
- Answer the correct questions and win the price.

## Code Checks

| Build                                                                                                                                                                            | Unity                                                                                                                                                                           | Git Inspector                                                                                                                                                                   | Code Coverage                                                                                                                                                                   |
|--|--|--|--|
|[![C/C++ CI - Build Status](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/c-cpp.yml)  |[![Unit Testing - Unity](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/unit.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/unit.yml) |[![Contribution Check - Git Inspector](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/gitinspector.yml) |[![CI-Coverage](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/coverage.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/coverage.yml)  |

| Code Quality - Static analysis                                                                                                                                                  | Code Quality - Dynamic analysis                                                                                                                                                                        |
|--|--|
|[![Code Quality - Static Code - Cppcheck](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/cppcheck.yml) |[![Code Quality Dynamic Code Analysis Valgrind](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/dynamic%20code%20analysis.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc-team-19/actions/workflows/dynamic%20code%20analysis.yml)|


## Folder Structure
Folder             | Description
-------------------|----------------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
`5_Report`         | overall report of the project work
`6_Video`          | video explaining the project work
`7_daily standup call`| daily report of work done, to be done and blockages

## What challenges were faced and how were they resolved

1. Parsing the csv file into an array of structures using pass by reference.
 
        by studying the csv file handling forums,pages and looking through all resources, understanding the structure and pattern of file and also how file handling tools work.

2. How to retrieve the data of the structure to execute the program successfully
 
        With the help of some resources on pointer to structure array and dynamic memory allocation, the task was successfully carried out.

3. How to access files located in different folders and directories
 
        With  the  help of relative path and command line executions to get clear understanding of the directory detection.


## contributors list
 
 Name | PS Number | feature built |no. of issues raised | no. of issues resolved|
 -----|-----------|---------------|---------------------|-----------------------|
 Y Swathi|99004486|       question bank,menu settings      |   1        |     1  |
 Vootla Lahari|99004489|    Help contestant, quiz rounds      |   0        |   0    |
 Ashrika Mishra|99004492|       scoring, game introduction  |   0        |   0    |
 Preet Pandit|99004493|  reading of .csv files, topics selections,life tracking        |    3       |   3    |
 Pavan Yadav |99004494|     user authentication,uniqe username and password setting     |    1       |   1    |
 
 ## Learning Resources
1. [Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [Table Generator for Markdonw](https://www.tablesgenerator.com/markdown_tables)
3. [Git Inspector](https://github.com/ejwa/gitinspector.git)
4. [GitGub workflow](https://docs.github.com/en/actions/learn-github-action)
5. [File Handling in C](https://www.geeksforgeeks.org/basics-file-handling-c/)
6. [CSV file handling](https://www.geeksforgeeks.org/relational-database-from-csv-files-in-c/)
7. [Array of structures passed by Reference](https://github.com/stepin654321/MiniProject_Template/tree/master/Example_Programs/programming_concpets/array_of_structures)
