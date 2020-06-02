CFLAG = 
CC = gcc

.PHONY: all
all: fgets fopen open

.PHONY: clean
clean:
	rm bin/*

fgets: src/fgets.c
	@mkdir -p bin
	${CC} ${CFLAG} src/${@}.c -o bin/${@}

fopen: src/fopen.c
	${CC} ${CFLAG} src/${@}.c -o bin/${@}

open: src/open.c
	${CC} ${CFLAG} src/${@}.c -o bin/${@}
