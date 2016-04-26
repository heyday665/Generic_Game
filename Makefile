all:
	echo "GenericGame made by John Dacey and Cameron Nelson"

install-sfml:
	cp -r includes/SFML-2.3.2/* /usr/local
	
build:
	g++-4.9 -Wall -O3 source/generic.cpp source/Game.cpp -o Generic.out -lsfml-graphics -lsfml-window -lsfml-system
	@mv *.out binaries/

run:
	@./binaries/Generic.out
testa:
	@./binaries/a.out

clean:
	@rm binaries/*.out
