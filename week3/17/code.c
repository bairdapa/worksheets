struct link {
  TYPE value;
  struct link * next;
};

struct linkedListStack {
  struct link *firstLink;
}

void linkedListStackInit (struct linkedListStack * s) {
  s->firstLink = 0;
}

void linkedListStackFree (struct linkedListStack *s) {
  while (! linkedListStackIsEmpty(s)) linkedListStackPop(s);
}

void linkedListStackPush (struct linkedListStack *s, TYPE d) {
  struct link * newLink = (struct link *) malloc(sizeof(struct link));
  assert (newLink != 0);
  /* Fix me */
}

TYPE linkedListStackTop (struct linkedListStack *s) {
  /* Fix me */
}

void linkedListStackPop (struct linkedListStack *s) {
  /* Fix me */
}

int linkedListStackIsEmpty (struct linkedListStack *s) {
  /* Fix me */
}
