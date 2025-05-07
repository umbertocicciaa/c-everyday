CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = main

all: $(TARGET)

$(TARGET): main.c queue.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c queue.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
