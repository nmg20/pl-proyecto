SRC = parser
TEST = test.ex

all: compile

compile:
	flex $(SRC).l
	gcc -o $(SRC) lex.yy.c -lfl

run:
	./$(SRC) < $(TEST)

clean:
	rm $(SRC) lex.yy.c
