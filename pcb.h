#pragma once

typedef enum ProcessStatus {Invalid=-1,
			    Created=0x0,
			    Running=0x1,
			    Ready=0x2,
			    Waiting=0x3,   // io  wait
			    }ProcessStatus;

typedef struct PCB{
  ElemQ list;  // MUST BE THE FIRST!!!
  int pid;
  ProcessStatus status;
  int counter_up;
  int counter_down;
  ReadyQ *ready_list;
  int next_burst_type; //if 0 => cpu else io;
} PCB;



void PCB_init();

int PCB_free(PCB* pcb);