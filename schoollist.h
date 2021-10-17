#ifndef schoollist_h
#define schoollist_h

struct school_node {
  char* name;
  int population;
  struct school_node *next;
};

// headers
void introduceSchool(struct school_node *s);
struct school_node * make_school(int population, char *name);
void print_list(struct school_node *p);
struct school_node * insert_front(struct school_node *start , char * name, int population);
struct school_node * free_list(struct school_node *start);
#endif
