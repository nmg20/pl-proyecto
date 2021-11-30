FUENTE = proyecto
PRUEBA = test.ex
all: compile

compile:
	flex $(FUENTE).l
	bison -o $(FUENTE).tab.c $(FUENTE).y -yd
	gcc -o z lex.yy.c $(FUENTE).tab.c -lfl -ly

run:
	./z $(PRUEBA)

clean:
	rm z lex.yy.c $(FUENTE).tab.c $(FUENTE).tab.h

