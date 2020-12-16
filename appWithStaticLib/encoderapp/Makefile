LIBS = -L../encoderlib -lencoder
LDFLAGS = -static
CFLAGS = -I../encoderlib -Wall -W

TARGET   = encoderapp
SOURCEDIR = ./
SOURCES = $(wildcard $(SOURCEDIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)

$(warning ldflags $(LDFLAGS))

output: $(TARGET)

$(TARGET): $(OBJECTS)
	gcc -Wall -W  -o $(TARGET) $(OBJECTS) $(LIBS) $(LDFLAGS)

#encoderrr.o: encoder.c
#	gcc -Wall -c encoder.c -o encoderrr.o $(CFLAGS)
clean:
	rm -f $(OBJFILES) $(TARGET)
