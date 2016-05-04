all:
	@echo "GenericGame made by John Dacey and Cameron Nelson"
	
build:
	g++-4.9 -Wall -O3 source/generic.cpp source/Game.cpp -o Generic.out -lsfml-graphics -lsfml-window -lsfml-system

run:
	@./binaries/Generic.out
testa:
	@./binaries/a.out

clean:
	@rm binaries/*.out
