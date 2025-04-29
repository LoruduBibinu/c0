CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard C00/ex*/*.c C01/ex*/*.c C02/ex*/*.c C03/ex*/*.c C04/ex*/*.c C05/ex*/*.c C06/ex*/*.c C07/ex*/*.c C08/ex*/*.c mingo.c)
OBJS = $(SRCS:.c=.o)
TARGET = mingo

all: headers $(TARGET)

headers:
	python3 generate_headers.py

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean headers
