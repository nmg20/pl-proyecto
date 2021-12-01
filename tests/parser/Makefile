FUENTE = parser
PRUEBA = test.ex
all: compile

compile:
	flex $(FUENTE).l
	bison -o $(FUENTE).tab.c $(FUENTE).y -yd
	gcc -o $(FUENTE) lex.yy.c $(FUENTE).tab.c -lfl -ly

run:
	./$(FUENTE) $(PRUEBA)

run2:
	./$(FUENTE) $(PRUEBA2)

clean:
	rm z lex.yy.c $(FUENTE).tab.c $(FUENTE).tab.h

