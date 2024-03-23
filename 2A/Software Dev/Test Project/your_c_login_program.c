// your_c_login_program.c
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <username> <password>\n", argv[0]);
        return 1;
    }

    // Simulate a simple login check (replace this with your actual authentication logic)
    char *valid_username = "user";
    char *valid_password = "pass";

    if (strcmp(argv[1], valid_username) == 0 && strcmp(argv[2], valid_password) == 0) {
        printf("success\n");
    } else {
        printf("failure\n");
    }

    return 0;
}
