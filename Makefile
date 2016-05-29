chameleon : chameleon.o 
	cc -o chameleon -pthread chameleon.o thpool.o

chameleon.o : chameleon.c thpool.c thpool.h
	cc -c chameleon.c thpool.c

chameleon.debug.o : chameleon.c thpool.c thpool.h
	cc -c -g chameleon.c thpool.c

debug : chameleon.debug.o 
	cc -o chameleon -g -pthread chameleon.o thpool.o

clean :
	rm -f *.o 
	rm chameleon
