SUBDIRS = src

help:
	echo "Установить: make install"
	echo "В директорию: ./configure --prefix dir, где dir - целевой каталог, затем make install"
	echo "Дистрибутив: make dist"
	echo "Очистка: make clean / make distclean (удалить ВСЁ)"
	echo "Доп. правила: добавлять в Makefile.am"
	echo "Генерация документации в файл manual: make doc"

doc:
	cat README src/fc.txt src/fh.txt > manual

test:
	./src/fact
