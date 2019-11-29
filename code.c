/*
    Lab 5 - Zach Friedman - zmf0010

    This program uses Dijkstra's Shortest Path alogrithm to find the least cost path between a set
    of routers. These routers and their details are provided through a text file "router.txt", and the
    program writes its results to a text file "LS.txt".
*/

#include "header.h"

int main(int argc, char **argv) {
    char *routerFile = "router.txt";

    OpenFile_Read(routerFile);

    return 0;
}

/*
    Description: This function is used to open and read router.txt.
*/
void OpenFile_Read(char *fileName) {
    FILE *fp = fopen(fileName, "r"); //open a file in "read" mode
    char buffer[BUFFER_SM]; //buffer for the data that is read in

    //error checking
    if(!fp) {
        perror("OpenFile_Read error");
        exit(1);
    }

    while(fgets(buffer, BUFFER_SM, fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
}

/*
    Description: This function is used to write the shortest paths to LS.txt
*/
void OpenFile_Write(char *fileName) {
    FILE *fp = fopen(fileName, "w"); //open file in write mode
    char buffer[BUFFER_SM]; //buffer for data to be written

    //error checking
    if(!fp) {
        perror("OpenFile_Write error");
        exit(1);
    }

    while(strlen(buffer) > 0) { //while data exists within the buffer to be written to the file...
        fputs(buffer, fp); //write the buffer to the file; this needs to be formatted
        fputs("\n", fp); //include a newline
    }
}
