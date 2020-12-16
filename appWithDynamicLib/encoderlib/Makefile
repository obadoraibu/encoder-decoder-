CC = gcc
CFLAGS = -std=gnu99 -fPIC -pedantic -Wall -Wextra
LDFLAGS      = -shared

DEBUGFLAGS   = -O0 -D _DEBUG
RELEASEFLAGS = -O2 -D NDEBUG -combine -fwhole-program

TARGET  = libencoder.so
SOURCEDIR = ./
SOURCES = $(wildcard $(SOURCEDIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)

output: $(TARGET)
debug: CXXFLAGS +=-DDEBUG -g -ggdb3
debug: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(CFLAGS) $(DEBUGFLAGS) -o $(TARGET) $(OBJECTS)

clean:
	rm $(OBJECTS) $(TARGET)

install:
	install $(TAEGET) $(PREFIX)
uninstall:
	rm -rf $(PREFIX)/$(TARGET)
