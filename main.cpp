// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This program shows how local and global variables work

#include <iostream>

// global variable
int first = 10;


void localVariable() {
    // this shows what happens with local variables
    int first = 21;
    int second = 12;
    int third = first + second;
    std::cout << "Local first Variable: " << first << std::endl;
    std::cout << "second Variable: " << second << std::endl;
    std::cout << first << " + " << second << " = "
    << third << "(third)" << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables
    first = first + 1;
    int second = 12;
    int third = first + second;

    std::cout << "\nGlobal first Variable: " << first << std::endl;
    std::cout << "second Variable: " << second << std::endl;
    std::cout << first << " + " << second << " = "
    << third << "(third)" << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();
}
