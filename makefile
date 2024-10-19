run : bin/tazo
	./bin/tazo

bin/tazo : src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/tazo

asset/mensaje : bin/tazo
	./bin/tazo > asset/mensaje