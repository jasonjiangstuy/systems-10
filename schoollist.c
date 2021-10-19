#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "schoollist.h"


void print_list(struct school_node *p){
  struct school_node *pointer = p;
  // WIP!!!
  printf("[");
  while(pointer != NULL){
    printf("Name: %s; Students: %d; \n", pointer -> name, pointer -> population);
    pointer = pointer -> next;
    if (pointer != NULL){
      printf(",");
    }
  }
  printf("]\n");

}

struct school_node * insert_front(struct school_node *start , char * name, int population){
  struct school_node *new = make_school(population, name);
  new -> next = start;
  return new;
}

struct school_node * free_list(struct school_node *start){
  struct school_node *target = start;
  struct school_node *holdnext;
  while (target != NULL) {
    holdnext = target -> next;
    free(target);
    target = holdnext;
    /* code */
  }
  return target;
}
// Write a function that prints out variables of your structs type in a reasonable way.
void introduceSchool(struct school_node *s){
  printf("Introducting %s with %d students\n", s->name, s->population);
}

// Write a function that creates a new struct in heap memory, it should have paramteters appropraite to your struct.
struct school_node * make_school(int pop, char *nam) {
  struct school_node *n = malloc(sizeof(struct school_node));
  n->name = nam;
  n->population = pop;
  n->next = NULL;
  return n;
}

// WIP
struct school_node * remove_node(struct school_node *front, char* data){
  struct school_node * target = front;
  struct school_node * previous;
  while (target) {
    // printf("before stagfallinside\n");
    // introduceSchool(target);
    if (strcmp(target -> name, data) == 0){
      // printf("after stagfall\n");
      if (previous){
        previous -> next = target -> next;
        free(target);
      }else{
        free(target);
      }
      return front;
    }
    previous = target;
    target = target-> next;

  }
  return front;

}
