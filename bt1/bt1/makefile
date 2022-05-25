# define the C compiler to use
CC       = g++
# define comipler flags
CFLAGS   = -Wall -fmax-errors=10 
# define library paths in addition to /usr/lib
LFLAGS   = 
# define libraries to use
LIBS     = 
# define the object files that this project needs
OBJFILES = main.o bt1.o 
# define the name of the executable file
MAIN     = bt1
# all of the below is generic - one typically only adjusts the above

all: $(MAIN)

$(MAIN): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJFILES) 
    
%.o: %.cpp
	$(CC) $(CFLAGS) -cpp -o $@ $<

clean:
	rm -f $(OBJFILES) $(MAIN)