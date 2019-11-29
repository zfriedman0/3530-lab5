CSCE 3530.001 - Lab 5
Created by Zach Friedman - zmf0010 - zacheryfriedman@my.unt.edu

Description:
    This program takes in a text file (router.txt) and uses Dijkstra's Shortest Path Algorithm to calculate
    the least cost path between the nodes specified within the file. It writes the result to another text
    file (LS.txt). The files follow specific formats and are shown below.

    Input = s d c

    Output = d (s, d)

    *(s = source, d = destination, c = cost)

Issues:

Usage:
    - Compile the source code file:     gcc -o code code.c
    - Run the compiled program:         ./code

    - The program will then calculate the shortest path between each node and write the result
      to LS.txt