ifeq ($(CC),i686-w64-mingw32-gcc)
	EXTENSION=.exe
endif

all: timer$(EXTENSION)

clean:
	rm -f timer timer.exe *.o

timer$(EXTENSION): timer.o hlaska.o
	$(CC) -W -Wall -o $@ $^

%.o: %.c
	$(CC) -W -Wall -c -o $@ $^

.PHONY: all clean
