#include "ActionToPlay.h"
#include "ActionSave.h"
#include "ActionLoad.h"
#include "..\GUI\GUI.h"
#include "../ApplicationManager.h"

ActionToPlay::ActionToPlay(ApplicationManager* pMan)
	:Action(pMan)
{
}

void ActionToPlay::Execute()
{
	GUI* pGUI = pManager->GetGUI();
	if (pManager->getFigCount() > 0)
	{
		pManager->Save_load();
	}
	
	UI.InterfaceMode = MODE_PLAY;
	pGUI->ClearToolBar();
	pGUI->CreatePlayToolBar();
	pGUI->ClearStatusBar();
	pGUI->PrintMessage("Welcome to play mode :)");

}
