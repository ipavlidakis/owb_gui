/*
**	Main entry point
**	Automatically generated by Emperor
*/

#include "includes.h" 


const char *version = "$VER:  "PROGNAME" "VERSION"."REVISION" "DATE" �,"DEVELOPER"\n\0";

int main(int argc, char **argv)
{
	if((AppPort = IExec->CreateMsgPort())&&(MsgPort = IExec->CreatePort("noname_Port", 0)))
	{
		IDOS->SetProgramName("OWB_gui");
		OpenLibs();
		InitStuff();
//		AppRegistering();
		Ep_OpenScreen_Screen1();
		InitLists();
		InitWindows();
        ReadCFG();

		Ep_OpenWindow_Window1();
        Ep_OpenWindow_Window3();
		load_bookmarks();
		Events();
//		SavePrefsTree();
		CleanExit("JustExit");
	}
	return(0);
}

