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
  newLink->value = d;
  newLink->next = s->firstLink;
  s-firstLink = newLink;
}

TYPE linkedListStackTop (struct linkedListStack *s) {
  assert(s->firstLink != 0);
  return s->firstLink;
}

void linkedListStackPop (struct linkedListStack *s) {
  assert(s->firstLink != 0);
  struct link *tempLink = s->firstLink;
  s->firstLink = s->firstLink->next;
  free(tempLink);
}

int linkedListStackIsEmpty (struct linkedListStack *s) {
  if(s->firstLink == 0) return 1;
  return 0;
}
