#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string answer = get_string("What's your name?");
    printf("Hello, %s\n", answer);
}

//to compile when make hello.c doesn't work: cc hello.c -o hello cs50.c