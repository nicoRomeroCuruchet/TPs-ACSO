CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = ring
SRC = ring.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
