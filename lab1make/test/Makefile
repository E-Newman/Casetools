CC=gcc
CFLAGS=-Wall -O3 -march=native -mtune=native
SOURCES=fact.c
HEADERS=fact.h
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=fact
BUILD_DIR?=$(PWD)
DOC=Doxyfile

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJECTS)

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -c $(SOURCES)
copy: $(EXECUTABLE)
ifeq ($(BUILD_DIR), $(PWD))
	echo "BUILD_DIR is not specified. Building at the current catalog"
else
	cp -f $(EXECUTABLE) $(BUILD_DIR)
endif

distribute: $(SOURCES)
	tar -cf fact_pkg.tar.gz $(SOURCES) $(HEADERS) $(DOC) Makefile
doc:
	doxygen $(DOC)
clean:
	rm $(EXECUTABLE) $(OBJECTS)
cleanexec:
	rm $(EXECUTABLE)
cleanobj:
	rm $(OBJECTS)
test: $(EXECUTABLE)
	./$(EXECUTABLE)
help:
	echo "make - собрать в текущем каталоге"
	echo "make copy BUILD_DIR=dir - собрать в каталоге по пути dir"
	echo "make distribute - собрать исходные файлы в архив с расширением .tar.gz"
	echo "make doc - генерация документации в формате Doxygen"
	echo "make clean - удалить исполняемый и объектные файлы"
	echo "make cleanexec - удалить исполняемый файл"
	echo "make cleanobj - удалить объектные файлы"
	echo "make test - сборка и тестовый запуск"
