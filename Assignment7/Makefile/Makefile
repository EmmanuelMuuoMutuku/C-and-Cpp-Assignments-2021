CC = gcc
CFLAGS = -Wall
FILES = linked_list.c use_linked_list.c 
OBJ = linked_list.o use_linked_list.o 

all: main

#Compile from source files 
main: $(FILES)
	$(CC) $(CFLAGS) -o use_linked_list $(FILES)

#Compile only the object file of the function definition file
linked_list.o: linked_list.h linked_list.c
	$(CC) $(CFLAGS) -c linked_list.c 

#Compile only the object file of the main function file
use_linked_list.o: linked_list.h use_linked_list.c 
	$(CC) $(CFLAGS) -c use_linked_list.c 

#Target to link the object files together
link_only: linked_list.o use_linked_list.o 
	$(CC) -o use_linked_list $(OBJ)

#Delete the .o files and the executable file 
clean:
	rm -f *.o 
	rm -f use_linked_list

