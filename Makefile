
bin/DigDug: src/DigDug.cpp include/*
	c++ src/DigDug.cpp -o bin/DigDug -I include -l curses 

run : bin/DigDug
	./bin/DigDug