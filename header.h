#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SM 1000
#define BUFFER_MD 10000
#define BUFFER_LG 100000

void OpenFile_Read(char *fileName); //used to open a file for reading
void OpenFile_Write(char *fileName); //used to open a file for writing