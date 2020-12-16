LIBS = -L../encoderlib -lencoder
LDFLAGS = -static
CFLAGS = -I../encoderlib -Wall -W

TARGET   = decoderapp
SOURCEDIR = ./
SOURCES = $(wildcard $(SOURCEDIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)

$(warning ldflags $(LDFLAGS))

output: $(TARGET)

$(TARGET): $(OBJECTS)
	gcc -Wall -W  -o $(TARGET) $(OBJECTS) $(LIBS) $(LDFLAGS)

#encoderrr.o: decoder.c
#	gcc -Wall -c decoder.c -o $(CFLAGS)
clean:
	rm -f $(OBJFILES) $(TARGET)
