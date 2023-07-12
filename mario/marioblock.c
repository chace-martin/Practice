#include <stdio.h>
#include <cs50.h>

//Created functions must be declared before the program reaches the implemented lines, since C works from top to bottom.
void print_grid(int size);
int get_size(void);

int main(void)
{
    //Get size of grid using "do - while loop". Declare interger "n", then list the action, and the "while" condition.
    int n = get_size();

    //Print grid of bricks using "for" loop. Initialize varable "i = 3", check conditional "i < n", then execute action "i++".
    print_grid(n);
}









//Create get_size function. The function will output an interger, so it is an "int" data type. It does not take inputs, hence "void".
int get_size(void)
{
int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

//Create print_grid function. The function has no output, so it is a "void" data type. The function's input is an integer I am calling "size".
void print_grid(int size)
{
for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}