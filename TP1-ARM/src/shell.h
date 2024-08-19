/***************************************************************/
/*                                                             */
/*   ARM Instruction Level Simulator                           */
/*                                                             */
/*   CMSC-22200 Computer Architecture                          */
/*   University of Chicago                                     */
/*                                                             */
/***************************************************************/

/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */
/*          DO NOT MODIFY THIS FILE!                            */
/*          You should only change sim.c!                       */
/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

#ifndef _SIM_SHELL_H_
#define _SIM_SHELL_H_

#include <inttypes.h>
#define FALSE 0
#define TRUE  1

#define ARM_REGS 32

typedef struct CPU_State_Struct {
  uint64_t PC;		          /* program counter */
  int64_t REGS[ARM_REGS];   /* register file. */
  int FLAG_N;               /* flag N */
  int FLAG_Z;               /* flag Z */
} CPU_State;

/* Data Structure for Latch */

extern CPU_State CURRENT_STATE, NEXT_STATE;

extern int RUN_BIT;	/* run bit */

uint32_t mem_read_32(uint64_t address);
void     mem_write_32(uint64_t address, uint32_t value);

/* YOU IMPLEMENT THIS FUNCTION */
void process_instruction();

#endif
