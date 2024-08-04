#------------------------------------------------------------------------------
# //Kevin Gallegos 1858764 PA1
# Makefile for CSE 101 Programming Assignment 1
#
# make                   makes Lex
# make ListClient        makes ListClient
# make clean             removes all binaries
# make checkClient       checks ListClient for memory errors
# make checkLex          checks Lex for memory errors
#------------------------------------------------------------------------------

CC	= clang
CFLAGS  = -std=c17 -Wall
LFLAGS  = -lm
EXEC    = Lex
Lex_OBJS	= Lex.o List.o
ListClient_OBJS = ListClient.o List.o
ListTest_OBJS   = ListTest.o List.o

Lex: $(Lex_OBJS)
	$(CC) $(LFLAGS) -o Lex $(Lex_OBJS)

ListClient: $(ListClient_OBJS)
	$(CC) $(LFLAGS) -o ListClient $(ListClient_OBJS)

ListTest: $(ListTest_OBJS)
	$(CC) $(LFLAGS) -o ListTest $(ListTest_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<


clean :
	rm -f Lex ListClient ListTest Lex.o ListClient.o ListTest.o List.o

checkClient : 
	valgrind --leak-check=full ListClient

checkLex :
	valgrind --leak-check=full Lex in3 blah3


