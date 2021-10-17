#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "schoollist.h"

// Write a main function that tests all these things.
int main() {
  srand(time(NULL));
  /* code */
  struct school_node *stuy = make_school(4000,"Stuy");
  introduceSchool(stuy);

  struct school_node *blah = make_school(rand(),"blah");
  introduceSchool(blah);

  struct school_node *start = make_school(rand(),"number 1");
  int counter;
  char * newName = "number ";
  char number[20];
  char * holdnewName;
  for (counter = 2; counter < 10; counter++){
    // printf("TEst\n");
    sprintf(number, "%d", counter);
    // holdnewName = strcat(newName, number);
    // printf("%s\n", *holdnewName);
    // hold = insert_front(hold, holdnewName, rand());
    start = insert_front(start, "test", rand());

  }

  print_list(start);
  printf("Should be null now:\n" );
  print_list(free_list(start));
  
  print_list(start);
  return 0;
}



// Have your program randomly assign some part of your struct each time it is run.
// Have meaningful output.
// DONT FORGET A MAKEFILE
