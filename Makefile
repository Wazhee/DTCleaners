#Makefile for DTCleaner
#HowToUse:
# compile being used 
CXX = g++
# Preprocessor flags 
CPPFLAGS = -Wall
# Compiler flags 
CXXFLAGS =
# Source files needed for the compiler
SRCS = main.cc cleaner_functions.cc
# Object files needed for the linker
OBJS = $(SRCS:.cc=.o)
# Executable name
EXEC = cleaner
# creates phony targets (make all/ make clean commands))


# all target for generating the executable
all : $(EXEC)

# Clean target for deleting created files(easily replaceable files))
clean:
	rm -f *~ *.o $(EXEC)

# Generate the executable
$(EXEC) : $(OBJS)
	$(CXX) $(CPPFLAGS) -o $(EXEC) $(OBJS) 


# end of file
