#ifndef GAME_H
#define GAME_H

#include <vector>

/*
	Note: I'm just creating this class as a guideline, this might not be
	what it will actually look like. This class will be implemented once we
	figure out how to use SDL2 with CMake.


	This class will be Singleton since there will be only one object of this 
	class and other objects of the game will interact with it.
*/
class Game
{
public:
	bool init(); //Called at the start of the program

	void render();
	void update();
	void handleEvents();
	void clean();

	static Game* Instance() {
		if (s_pInstance == NULL) {
			s_pInstance = new Game();
		}

		return s_pInstance;
	}


private:
	Game() {};
	~Game() {};

	static Game* s_pInstance; //Singleton instance

	bool m_bRunning; //Holds if the game is running (for the main loop)

	int m_gameWidth;
	int m_gameHeight;

};
#endif // !GAME_H
