#include <stdio.h>
#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE) (void)
DEFINE_COMMAND(quit, internal){
    printf("Command quit\n");
}
DEFINE_COMMAND(start, external) {
    printf("Command start");
}
int main()
    {
        internal_quit_command();
        external_start_command();
        return 0;
    }