CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = main

all: $(TARGET)

$(TARGET): main.c arraylist.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c arraylist.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
