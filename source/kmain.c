#include "../drivers/frame_buffer.h"

int kmain(void) {
    char msg[] = "Welcome to My Worksheet 2 OS";
    fb_write(msg, sizeof(msg) - 1);
    return 0;
}
