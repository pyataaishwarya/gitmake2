all:main
	echo "build done"
main:main.o bubblesort.o selectionsort.o insertionsort.o quicksort.o mergesort.o 
	gcc main.o bubblesort.o selectionsort.o insertionsort.o quicksort.o mergesort.o -o main
main.o:main.c
	gcc -c main.c
bubblesort.o:bubblesort.c
	gcc -c bubblesort.c
selectionsort.o:selectionsort.c
	gcc -c selectionsort.c
insertionsort.o:insertionsort.c
	gcc -c insertionsort.c
quicksort.o:quicksort.c
	gcc -c quicksort.c
mergesort.o:mergesort.c
	gcc -c mergesort.c
clean:
	rm *.o main
