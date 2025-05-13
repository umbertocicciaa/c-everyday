CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = main

all: $(TARGET)

$(TARGET): main.c tree.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c tree.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
