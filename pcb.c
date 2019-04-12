#include <stdio.h>
#include <pcb.h>

void PCB_init(){
   PCB* pcb = (PCB*) malloc(sizeof(PCB));
   pcb->status = Created;
   pcb->counter_up = 0;
   pcb->counter_down = 0;
   pcb->pid = current_pid;
   current_pid++;
   pcb->ready_list = NULL;
   pcb->next_burst_type = 0; //first burst is CPU
}

int PCB_free(PCB* pcb){
  deleteQ(pcb->ready_list);
  free(pcb);
}
