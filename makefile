.PHONY: all
all:linux
# 	@echo "linux:   make linux"
# 	@echo "windows: make windows"

.PHONY: linux
linux: efu
linux: PLATFORM=PLATFORM_LINUX

.PHONY: windows
windows: efu.exe
windows: PLATFORM=PLATFORM_WINDOWS

OBJS=main.o

CFLAGS=-O2 -Wall

.SUFFIXES: .c .o

efu: makefile $(OBJS)
	gcc -o $@ $(OBJS)

efu.exe: makefile $(OBJS)
	gcc -o $@ $(OBJS)

.c.o: makefile
	gcc $(CFLAGS) -D$(PLATFORM) -c $< -o $@

.PHONY: clean
clean:
	rm -f efu efu.exe $(OBJS)

