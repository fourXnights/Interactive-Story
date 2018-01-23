//use of the observer pattern, the code was provided to us by Chris
#include "InputManager.h" 

inputManager::inputManager()
{

}

bool inputManager::attach(int input)
{

	for (unsigned int i = 0; i < myRegisterInput.size(); i++)
	{
		if (input == myRegisterInput[i])
		{
			return false;
		}

	}

	myRegisterInput.push_back(input);

}
void inputManager::detach(int input)
{
	for (unsigned int i = 0; i < myRegisterInput.size(); i++)
	{
		if (input == myRegisterInput[i])
		{
			myRegisterInput.erase(myRegisterInput.begin() + i);
		}
	}

}
void inputManager::notify(int input)
{
	for (unsigned int i = 0; i < myRegisterInput.size(); i++)
	{
		if (input == myRegisterInput[i])
		{
			for (int i = 0; i < myListeners.size(); i++)
			{
				myListeners[i]->keyDownEvent(input);
			}
			break;
		}
	}
}
void inputManager::setListeners(inputListener* listener)
{
	myListeners.push_back(listener);
}