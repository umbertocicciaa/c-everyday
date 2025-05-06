CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = main

all: $(TARGET)

$(TARGET): main.c sum.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c sum.c

run: $(TARGET)
	./$(TARGET) ${NUMBER1} ${NUMBER2}

clean:
	rm -f $(TARGET)