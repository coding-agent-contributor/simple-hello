# Variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Target
TARGET = main

# Build rule
$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

# Run rule
run: $(TARGET)
	./$(TARGET)

# Clean rule
clean:
	rm -f $(TARGET)