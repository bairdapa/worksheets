struct link {
  TYPE value;
  struct link * next;
};

struct listQueue {
  struct link *firstLink;
  struct link *lastLink;
};

void listQueueInit (struct listQueue *q) {
  struct link *lnk = (struct link *) malloc(sizeof(struct link));
  assert(lnk != 0); /* lnk is the sentinel */
  lnk->next = 0;
  q->firstLink = q->lastLink = lnk;
}

void listQueueAddBack (struct listQueue *q, TYPE e) {
  struct link * newLink = (struct link *) malloc(sizeof(struct link));
  assert (newLink != 0);
  newLink->value = e;
  newLink->next = 0;
  q->lastLink->next = newLink;
  q->lastLink = newLink;
}

TYPE listQueueFront (struct listQueue *q) {
  assert(q->firstLink != 0);
  return q->firstLink->value;
}

void listQueueRemoveFront (struct listQueue *q) {
  assert(q->firstLink != 0);
  struct link *tempLink = q->firstLink;
  q->firstLink = q->firstLink->next;
  free(tempLink);
}

int listQueueIsEmpty (struct listQueue *q) {
  if(q->firstLink == 0) return 1;
  return 0;
}
