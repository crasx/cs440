##----------------------------------------------------------------------------
# Created with genmake.pl v1.1 
# genmake.pl home: http://muquit.com/muquit/software/
# Copryright: GNU GPL (http://www.gnu.org/copyleft/gpl.html)
##----------------------------------------------------------------------------
rm=/bin/rm -f
CC= clang++
PROGNAME= story
#CFLAGS= -g -Wall -lpthread


SRCS = main.cpp  Environment.cpp \
regexp/Matcher.cpp   \
regexp/Pattern.cpp   

OBJS = main.o Environment.o \
regexp/Matcher.o   \
regexp/Pattern.o   \

.cpp.o:
	$(rm) $@
	$(CC) $(CFLAGS) -c $*.cpp -o $*.o

all: $(PROGNAME)

$(PROGNAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGNAME) $(OBJS) $(LIBS)

clean:
	$(rm) $(OBJS) $(PROGNAME) core *~
