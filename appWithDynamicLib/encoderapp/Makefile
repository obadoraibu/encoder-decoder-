LIBS = -L../encoderlib -lencoder
CFLAGS = -Wall -W -I../encoderlib

TARGET   = encoderapp
SOURCEDIR = .
SOURCES = $(wildcard $(SOURCEDIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LIBS) $(LDFLAGS) -Wl,-rpath=../encoderlib

#encoder.o: encoder.c
#		$(CXX) $(CXXFLAGS) $(CFLAGS) -c $<
clean:
	rm -f $(OBJECTS) $(TARGET)
