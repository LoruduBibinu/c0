CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard C00/ex*/*.c C01/ex*/*.c mingo.c)
OBJS = $(SRCS:.c=.o)
TARGET = mingo

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
