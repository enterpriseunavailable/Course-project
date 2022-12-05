FLAGS = -pedentic-erorrs -std=c++11

show.o : show.cpp game.h
	g++ $(FLAGS) -c $<

game.o : game.cpp show.cpp
	g++ $(FLAGS) -c $<

game: show.o game.o
	g++ $(FLAGS) -c $@

clean: 
	rm -f game game.o show.o game.tgz

tar:
	tar -czvf game.tgz *.cpp *.h

.PHONY : clean tar

