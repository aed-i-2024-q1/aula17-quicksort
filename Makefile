CC = gcc -Wall -pedantic

build_dir:
	mkdir -p build

element: build_dir
	$(CC) -c element.c -o build/element.o

partition: build_dir
	$(CC) -c partition.c -o build/partition.o

test_partition: element partition
	$(CC) build/element.o build/partition.o test_partition.c -o build/test_partition

quicksort: element partition
	$(CC) -c quicksort.c -o build/quicksort.o

test_quicksort: quicksort
	$(CC) build/element.o build/partition.o build/quicksort.o test_quicksort.c -o build/test_quicksort
	