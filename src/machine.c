#include <machine.h>

Result create_machine(PC_Machine* machine, const PC_Machine_Spec* spec) {
    if(!machine) return RESULT_INVALID_ARGS;
    return RESULT_SUCCESS;
}

Result free_machine(PC_Machine* machine) {
    if(!machine) return RESULT_INVALID_ARGS;
    return RESULT_SUCCESS;
}