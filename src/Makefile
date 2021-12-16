FUENTE = proyecto
PRUEBA = test.ex
PRUEBA2 = test2.ex
PRUEBA3 = test3.ex
PRUEBA4 = test4.ex
PRUEBA5 = test5.ex
PRUEBA6 = test6.ex

all: compile

compile:
	flex $(FUENTE).l
	bison -o $(FUENTE).tab.c $(FUENTE).y -yd
	gcc -o z lex.yy.c $(FUENTE).tab.c -lfl -ly

run:
	./z $(PRUEBA)

run2:
	./z $(PRUEBA2)

run3:
	./z $(PRUEBA3)

run4:
	./z $(PRUEBA4)

run5:
	./z $(PRUEBA5)

run6:
	./z $(PRUEBA6)

clean:
	rm z lex.yy.c $(FUENTE).tab.c $(FUENTE).tab.h

