#pragma once
#include "pcb.h"

typedef struct Timer{
	ElemQ queue;
	PCB* pcb;
}

typedef Queue TimerHandler;

Timer * timerCreate(PCB* pcb);
int startRunning(Timer* running);//return 0 if the burst has been consumed
int startIO(Timer* waiting);
