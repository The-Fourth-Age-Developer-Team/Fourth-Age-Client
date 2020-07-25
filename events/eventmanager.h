#ifndef FOURTH_AGE_CLIENT_EVENTMANAGER
#define FOURTH_AGE_CLIENT_EVENTMANAGER

#include "../graphics/gamewindow.h"
#include "../graphics/camera3d.h"
#include "../graphics/object.h"
#include "../libs/resourcemanager.h"
#include "../graphics/projection.h"
#include "../graphics/camera2d.h"

/* Buttons for input system. */
int     buttonEsc;
int     buttonW;
int     buttonS;
int     buttonA;
int     buttonD;
int     buttonQ;
int     buttonE;
int     buttonU;
int     buttonZ;

int   testObject;

/* 0 = battle phase, 1 = turn phase */
int     phase;

float   aspectRatio;

void    EMG_startGame   (char   gameDirectory[], int    windowWidth, int    windowHeight);

void    EMG_doGameTick  ();

void    EMG_doRenderTick    (float  deltaTime);

void    EMG_processInput    ();

void    EMG_startBattlePhase    ();

void    EMG_startTurnPhase      ();

void    EMG_endGame     ();

#endif
