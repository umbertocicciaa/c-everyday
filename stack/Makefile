CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = main

all: $(TARGET)

$(TARGET): main.c stack.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c stack.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)