stackList: stackList.c Stack.o
	gcc stackList.c Stack.o -o myApp
	
Stack.o: Stack.c Stack.h
	gcc -c Stack.c Stack.h
	
clean:
	rm *.o; rm *.exe;