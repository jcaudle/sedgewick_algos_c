struct node { int key; struct node *next; };

struct node *head, *z, *t;

list_initialize() {
  head = (struct node *) malloc(sizeof *head);
  z = (struct node *) malloc(sizeof *z);
  head->next = z; z->next = z;
}

delete_next(struct node *t) { t->next = t->next->next; }

struct node *insert_after(int v, struct node *t) {
  struct node *x;
  x = (struct node *) malloc(sizeof *x);
  x->key = v; x->next = t->next;
  t->next = x;
  return x;
}
