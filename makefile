selectionSort: main.cpp
	g++ main.cpp -o selectionSort

clean: 
	rm ./selectionSort

run: selectionSort
	./selectionSort
