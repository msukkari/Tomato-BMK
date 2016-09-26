
#include <stdio.h>
#include <iostream>
#include <string>


// sum two integers
int add(int a, int b){
    return a + b;
}

int main (){
	printf("hello world!\n");

	std::string test;
	std::cin >> test; //Waits for input so the screen doesn't close
    
    
    printf("7 + 9 = %d", add(7, 9));
    
	return 0;
}