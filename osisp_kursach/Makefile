CC = g++
CFLAGS = -std=c++11

all: osisp_kursach

osisp_kursach: main.o functions.o
	$(CC) $(CFLAGS) -o main.o functions.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

functions.o: functions.cpp
	$(CC) $(CFLAGS) -c functions.cpp

clean:
	rm -f *.o osisp_kursach
