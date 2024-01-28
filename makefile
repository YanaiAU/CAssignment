CC = gcc
CFLAGS = -Wall -fPIC -c

LOOPOBJECTS = basicClassification.o advancedClassificationLoop.o
RECURSIVEOBJECTS = basicClassification.o advancedClassificationRecursion.o

all : mains maindloop maindrec loops recursives loopd recursived

main.o: main.c
	${CC} ${CFLAGS} main.c

mains: main.o libclassrec.a
	${CC} -Wall -o mains main.o libclassrec.a

maindrec: main.o libclassrec.so
	${CC} -Wall main.o libclassrec.so -o ./maindrec

maindloop: main.o libclassloops.so
	${CC} -Wall main.o libclassloops.so -o ./maindloop

loops : libclassloops.a
recursives: libclassrec.a
loopd: libclassloops.so
recursived: libclassrec.so

libclassloops.a : ${LOOPOBJECTS}
	ar rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
	ranlib libclassloops.a


libclassrec.a : ${RECURSIVEOBJECTS}
	ar rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
	ranlib libclassrec.a

libclassloops.so: ${LOOPOBJECTS}
	${CC} -Wall ${LOOPOBJECTS} -shared -o libclassloops.so

libclassrec.so: ${RECURSIVEOBJECTS}
	${CC} -Wall  ${RECURSIVEOBJECTS} -shared -o libclassrec.so

basicClassification.o : basicClassification.c
	${CC} ${CFLAGS} basicClassification.c

advancedClassificationLoop.o : advancedClassificationLoop.c
	${CC} ${CFLAGS} advancedClassificationLoop.c

advancedClassificationRecursion.o : advancedClassificationRecursion.c
	${CC} ${CFLAGS} advancedClassificationRecursion.c

clean:
	rm -f *.so *.a *.o mains maindloop maindrec
