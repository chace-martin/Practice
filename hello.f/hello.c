#include <cs50.h>
#include <stdio.h>

int main(void)
{
   string first = get_string("What's your first name? ");
   string last = get_string("What's your last name? ");
   string country = get_string("What country are you from? ");
   printf("Hello, %s %s from %s!\n", first, last, country);
}