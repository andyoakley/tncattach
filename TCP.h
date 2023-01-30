#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>

int open_tcp(char* ip, char* port);
int close_tcp(int fd);