#include stdio.h

typedef struct node{
  int data;
  struct node *nextp;
} node_t;

int int main(int argc, char const *argv[]) {
  node_t *head = NULL;
  head = malloc(sizeof(node_t));
  head->data = 1;
  head->nextp = NULL;
  return 0;
}
