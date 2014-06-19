

CPPFLAGS=-Wall -g
LDFLAGS=-lreadline
OBJS=pdcalc.o parse.o



all:	pdcalc

pdcalc: $(OBJS)
	g++ $(OBJS) -o pdcalc -l readline

clean:
	rm *.o pdcalc
