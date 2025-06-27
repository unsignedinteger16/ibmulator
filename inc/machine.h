#ifndef _MACHINE_H_
#define _MACHINE_H_ 1

#include <result.h>

typedef struct {

} PC_Machine_Spec;

typedef struct {

} PC_Machine;

Result create_machine(PC_Machine* machine, const PC_Machine_Spec* spec);
Result free_machine(PC_Machine* machine);

#endif