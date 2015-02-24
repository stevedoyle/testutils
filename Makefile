
CFLAGS = -Wall -g

TARGET = sample.exe

all:
	g++ -o $(TARGET) $(CFLAGS) sample.cpp

clean:
	rm $(TARGET)
