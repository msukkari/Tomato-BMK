#include "Game.h"

#include <stdio.h>
#include <iostream>
#include <string>



int main (){

	if (Game::Instance()) {
		printf("Game init successful\n");
	}
	else {
		printf("Game init failed");
		return -1;
	}

	printf("Press ENTER to exit\n");
	std::cin.ignore();
    
	return 0;
}