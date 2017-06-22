

CPPFLAGS=-Wall -std=c++11 -g
LDFLAGS=-L /usr/lib/x86_64-linux-gnu

OBJS=pdcalc.o stack_element.o

LIBS= -Wl,-Bdynamic -lgmp -lgmpxx
      

all:	pdcalc
	@date
	@echo make all complete

pdcalc: $(OBJS)
	g++ $(LDFLAGS) $(OBJS) -o pdcalc $(LIBS)

clean:
	rm -f *.o pdcalc
	@echo make clean complete
	
depend:
	for i in *.cpp; do $(CC) $(FLAGS) -MM $$i; done > .depend
	@echo make depend complete

#######################################################################
# dependency includer below
#######################################################################

ifeq (.depend,$(wildcard .depend))
include .depend
endif
# DO NOT DELETE


	
