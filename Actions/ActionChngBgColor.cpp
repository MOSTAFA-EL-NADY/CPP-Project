#include "ActionChngBgColor.h"
#include "..\ApplicationManager.h"
#include "..\GUI\GUI.h"
#include "Action.h"
#include "..\Figures\CFigure.h"

ActionChngBgColor::ActionChngBgColor(ApplicationManager* pApp) :Action(pApp)
{
}

void ActionChngBgColor::Execute()
{
	GUI* pGUI = pManager->GetGUI();
	pGUI->PrintMessage(" Click at color to set a Background ");

	//pGUI->ClearToolBar();
	pGUI->CreateColorMenu();



	COLORSITEM s = pGUI->getcolor();
	if (s != EMPTYY)
	{
		//CFigure *c;
		switch (s)
		{
		case RED1: {
			pGUI->PrintMessage("the Background color set to RED");
			pGUI->SetBgColor(RED);
			pGUI->ClearDrawArea();
			pManager->UpdateInterface();
			UI.InterfaceMode = MODE_DRAW;
			pGUI->CreateDrawToolBar();

			break;
		}

		case GREEN2:
		{
			pGUI->PrintMessage("the Background color set to GREEN");
			pGUI->SetBgColor(GREEN);
			pGUI->ClearDrawArea();
			pManager->UpdateInterface();
			UI.InterfaceMode = MODE_DRAW;
			pGUI->CreateDrawToolBar();

			break;
		}
		case YELLOW3:
		{
			pGUI->PrintMessage("the Background color set to YELLOW");
			pGUI->SetBgColor(YELLOW);
			pGUI->ClearDrawArea();
			pManager->UpdateInterface();
			UI.InterfaceMode = MODE_DRAW;
			pGUI->CreateDrawToolBar();

			break;

		}
		case BLUE5:
		{
			pGUI->PrintMessage("the Background color set to BLUE");
			pGUI->SetBgColor(BLUE);
			pGUI->ClearDrawArea();
			pManager->UpdateInterface();
			UI.InterfaceMode = MODE_DRAW;
			pGUI->CreateDrawToolBar();

			break;
		}
		case defaultcolor:
		{
			pGUI->PrintMessage("the draw Background set to default");
			pGUI->SetBgColor(LIGHTGOLDENRODYELLOW);
			pGUI->ClearDrawArea();
			pManager->UpdateInterface();
			UI.InterfaceMode = MODE_DRAW;
			pGUI->CreateDrawToolBar();
			pGUI->isDrawed = false;
			pGUI->SetBgColor(LIGHTGOLDENRODYELLOW);
			pGUI->ClearDrawArea();
			pManager->UpdateInterface();
			break;

		}

		case EMPTYY:
			break;
		default:
			break;
		}
		pGUI->ClearColorMenu();
	}
}
