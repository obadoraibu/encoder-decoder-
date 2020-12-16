CC = gcc
CFLAGS = -pedantic -Wall -Wextra

DEBUGFLAGS   = -O0 -D _DEBUG
RELEASEFLAGS = -O2 -D NDEBUG -combine -fwhole-program

TARGET  = libencoder.a
SOURCEDIR = ./
SOURCES = $(wildcard $(SOURCEDIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)


$(info >---------- Start building static library...)
$(info >---------- Output file name: '$(TARGET)'---)
$(info >---------- Compiler: $(CC))
$(warning >---------- wSource files list: $(SOURCES))
$(info >---------- OBJECTS files list: $(OBJECTS))

#ouput: $(TARGET)
#debug: CXXFLAGS +=-DDEBUG -g -ggdb3
#debug: $(TARGET)

$(TARGET): $(OBJECTS)
		ar rcs $(TARGET) $(OBJECTS)

$(OBJECTS):$(SOURCES)
	gcc -O -c $(SOURCES)
	
clean:
	rm $(OBJECTS) $(TARGET)

install:
	install $(TARGET) $(PREFIX)
uninstall:
	rm -rf $(PREFIX)/$(TARGET)
