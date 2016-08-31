#ifndef  CONTEXT_INC
#define  CONTEXT_INC

#include "Updatable.h"

enum ContextID
{
	START, IN_GAME
};

class Game;

class Context : public Updatable
{
	public:
		Context(Game* game);
		void onStart(void* data=NULL);
		void onClose();
	private:
		bool m_willResumed=false;
		Game* m_game;
};

#endif
