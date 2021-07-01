PROJ_NAME = Team_19
TEST_PROJ_NAME = Test_$(PROJ_NAME)

COVERAGE_TEST_NAME = coverage_$(PROJ_NAME)

SRC = src/game_intro.c src/create_question_array.c src/read_file.c src/please_help.c  src/play.c  src/time_delay.c

TEST_SRC = ./test/test.c unity/unity.c 

INC = -Iinc -Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   editor = notepad
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  editor = cat
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:  
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run : all
	./$(PROJ_NAME).$(EXEC)

staticcheck: 
	cppcheck --enable=all --suppress=missingIncludeSystem main.c $(SRC) inc/program.h $(INC)

test: $(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(SRC) $(INC) -o $(TEST_PROJ_NAME).$(EXEC)
	./$(TEST_PROJ_NAME).$(EXEC)

coverage:$(SRC) 
	
	gcc -fprofile-arcs -ftest-coverage main.c -I -c $(SRC)  -o $(COVERAGE_TEST_NAME).$(EXEC)
	./$(COVERAGE_TEST_NAME).$(EXEC) < input_redirect.txt
	gcov -a main.c 
	$(editor) main.c.gcov
	
valgrind : 
	./$(PROJ_NAME).$(EXEC) < input_redirect.txt

clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcno
	$(RM) *.gcov
	$(RM) *.gcda
	
