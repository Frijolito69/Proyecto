bin/contra : src/main.cpp include/*.hpp
	c++ src/main.cpp -o bin/contra -I include -l curses

run: bin/contra
	./bin/contra 