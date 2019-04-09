#pragma once
#include "pdb.h"

extern int current_pid; //pid for an enterin process
extern int running; //1 if some process is running
extern Timer running; //a timer simulate the execution of a process
extern TimerHandler waiting_timers; //timers simulates io for waiting process;

extern ReadyQ ready_queue0; //queues of ready process
extern ReadyQ ready_queue1;
extern ReadyQ ready_queue2;
extern ReadyQ ready_queue3;

extern ReadyQ* last_taken; //pointer to the last rady_queue from witch we have tacken a process

extern Reasy ready; //queue with ready_queues;
