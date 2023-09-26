CXX = x86_64-w64-mingw32-g++
CXXFLAGS = -g -lncurses

#CXX = g++ # Linux

runmascota : bin/mascota
	./bin/mascota

bin/mascota : src/mascota.cpp include/Mascota.hpp
	$(CXX) src/mascota.cpp -o bin/mascota -I include

cleanmascota : bin/mascota
	rm bin/mascota

RunDigDug : src/RunDigDug.cpp
	$(CXX) src/DigDug.cpp -o src/DigDug -I include $(CXXFLAGS)