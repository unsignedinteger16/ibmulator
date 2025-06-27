#include <machine.h>
#include <result.h>
#include <log.h>

#include <stdio.h>

int main(int argc, char** argv) {
    PC_Machine_Spec machine_spec;

    PC_Machine machine;
    RESULT_CHECK(create_machine(&machine, &machine_spec));
    LOG_STDOUT("Machine created");
    RESULT_CHECK(free_machine(&machine));
}