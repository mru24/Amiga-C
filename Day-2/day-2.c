#include <exec/types.h>
#include <exec/exec.h>
#include <intuition/intuition.h>
#include <proto/intuition.h>
#include <proto/dos.h>
#include <proto/exec.h>

struct IntuitionBase * IntuitionBase;
struct Window * win;


int main(void) {
	IntuitionBase = (struct IntuitionBase *)OpenLibrary("intuition.library",0L);

	if(IntuitionBase) {

		struct NewWindow window1 = {
			30,30,200,300,0,1,
			NULL,NULL,
			NULL,NULL,
			"Title",
			NULL,NULL,
			0,0,-1,-1,
			WBENCHSCREEN

		};

		win = OpenWindow(&window1);

	};

	Delay(300);

	if(win) CloseWindow(win);
	if(IntuitionBase) CloseLibrary((struct Library *) IntuitionBase);



	return 0;
};