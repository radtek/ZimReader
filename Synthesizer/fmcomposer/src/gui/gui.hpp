#ifndef GUI_H
#define GUI_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <sstream>
#include "../fmengine/fmlib.h"
#include <algorithm>
#include "../globalFunctions.hpp"
#include "../libs/simpleini/SimpleIni.h"
#include "../input/input.hpp"
#include "../state.hpp"
#include "IconsMaterialDesign.h"

extern int charSize;
#define MAX_THEMECOLORS 79


using namespace sf;
using namespace std;

extern RenderWindow *window;
extern Event evt;
extern Uint32 textEntered[32];
extern Texture *tileset;

extern Color colors[MAX_THEMECOLORS];
extern void *focusedElement;
extern Font font;
extern Font font_condensed;
extern Font font_symbols;
extern int ROW_HEIGHT;
extern int CH_WIDTH;
extern int COL_WIDTH;


void loadColors(CSimpleIniA *reader);

enum colors{
	BACKGROUND, SIDEBAR, MENUBG, BLOCKBG, SLIDERBG, SLIDEROUTLINE, SLIDERVALUE, TITLE, BUTTONBGA, BUTTONBGB, BUTTONTEXT, TEXTINPUTBG, TEXTINPUTTEXT, TEXTINPUTOUTLINE, FOCUSOUTLINE, BUTTONTOGGLEDBG, BUTTONTOGGLEDTEXT, TEXTINPUTCURSOR,
	TEXTINPUTBGHOVER, TEXTINPUTBGFOCUS, TEXTINPUTOUTLINEFOCUS, TEXTINPUTOUTLINEHOVER, SLIDERBAR, SLIDERBARHOVER, VUMETERBARLOW, VUMETERBARMEDIUM, VUMETERBARHIGH, VUMETERBG, VUMETERTEXT, VUMETERTEXTSATURATED, VUMETERTOPBAR,
	PATTERNNOTE, PATTERNINSTRUMENT, PATTERNVOLUME, PATTERNEFFECT, VUMETERLINES,
	OPERATORBG, OPERATORBGHOVER, OPERATORTEXT, OPERATORTEXTHOVER, OPERATOROUTLINE, OPERATORLINKS, OPERATORBGMUTED, PATTERNROWNUMBERS, PATTERNSELECTION, MOVESELECTIONOUTLINE, SLIDERTITLE,
	SLIDERBGHOVER, BLOCKTEXT, LISTITEMBGFOCUS, LISTITEMTEXT, LISTITEMTEXTFOCUS, BLOCKBGHOVER,
	SCROLLBARBG, SCROLLBARCURSOR, SCROLLBARCURSORHOVER, SCROLLBARCURSORCLICKED, PATTERNBG, PATTERNBGODD, PATTERNCOLUMSEPARATOR, BUTTONBGHOVERA, BUTTONBGHOVERB,
	CONTEXTMENUBG, CONTEXTMENUBGHOVER, CONTEXTMENUTEXT, CONTEXTMENUTEXTHOVER, BUTTONTOGGLEBGHOVER, MENUITEMHOVER, MENUITEMSELECT, BUTTONBGCLICKEDA, BUTTONBGCLICKEDB, OPERATORVUMETER,
	LISTBG, POPUPSHADOW, TOPBARBG, SCROLLBARBGHOVER, WAVEFORMOFFSETBAR, LISTOUTLINE, SUBTITLE
};


enum pages{ PAGE_CONFIG = 7, PAGE_GENERAL = 12, PAGE_SONG = 13, PAGE_INSTRUMENT = 14, PAGE_PIANOROLL = 15 };





class GuiElement{
	protected:
	

	public:
	bool visible;
	GuiElement();
	void setVisible(bool visible);

};



void setWindowStyle(int fullscreen);

void showInstrumentLights();

void updateMouseCursor();

void gui_initialize();


#endif