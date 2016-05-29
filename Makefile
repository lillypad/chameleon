chameleon : chameleon.o thpool.o
	cc -o chameleon -pthread chameleon.o thpool.o
chameleon.o : chameleon.c thpool.c thpool.h
	cc -c chameleon.c thpool.c

debug : chameleon.c
	cc -o chameleon -g chameleon.c thpool.c thpool.h
