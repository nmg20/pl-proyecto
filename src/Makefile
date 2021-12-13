FUENTE = proyecto
PRUEBA = test.ex
PRUEBA2 = test2.ex
PRUEBA3 = test3.ex

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

clean:
	rm z lex.yy.c $(FUENTE).tab.c $(FUENTE).tab.h

