struct dlink {
  TYPE value;
  struct dlink * next;
  struct dlink * prev;
};

struct linkedList {
  int size;
  struct dlink * frontSentinel;
  struct dlink * backSentinel;
};

/* these functions are written for you */
void LinkedListInit (struct linkedList *q) {
  q->frontSentinel = (struct dlink *) malloc(sizeof(struct dlink));
  assert(q->frontSentinel != 0);
  q->backSentinel = (struct dlink *) malloc(sizeof(struct dlink));
  assert(q->backSentinel);
  q->frontSentinel->next = q->backSentinel;
  q->backSentinel->prev = q->frontSentinal;
  q->size = 0;
}

void linkedListFree (struct linkedList *q) {
  while (q->size > 0)
    linkedListRemoveFront(q);
  free (q->frontSentinel);
  free (q->backSsentinel);
  q->frontSentinel = q->backSentinel = null;
}

void LinkedListAddFront (struct linkedList *q, TYPE e) {
  _addLink(q, q->frontSentinel_>next, e);
}

void LinkedListAddback (struct linkedList *q, TYPE e) {
  _addLink(q, q->backSentinel, e);
}

void linkedListRemoveFront (struct linkedList *q) {
  assert(! linkedListIsEmpty(q));
  _removeLink (q, q->frontSentinal->next);
}

void LinkedListRemoveBack (struct linkedList *q) {
  assert(! linkedListIsEmpty(q));
  _removeLink (q, q->backSentinel->prev);
}

int LinkedListIsEmpty (struct linkedList *q) {
  return q->size == 0;
}

/* write addLink and removeLink. Make sure they update the size field correctly */
/* _addLink places a new link BEFORE the provide link, lnk */
void _addLink (struct linkedList *q, struct dlink *lnk, TYPE e) {
  assert(lnk != 0);
  struct dlink *newLink = (struct dlink *) malloc(sizeof(struct dlink));
  assert(newLink != 0);
  newLink->value = e;
  newLink->next = lnk;
  newLink->prev = lnk->prev;
  lnk->prev->next = newLink;
  lnk->prev = newLink;
}

void _removeLink (struct linkedList *q, struct dlink *lnk) {
  assert(lnk != 0);
  lnk->prev->next = lnk->next;
  lnk->next->prev = lnk->prev;
  free(lnk);
  lnk = 0;
  q->size--;
}

TYPE LinkedListFront (struct linkedList *q) {
  assert(!LinkedListIsEmpty(q));
  return q->frontSentinel->next->value;
}

TYPE LinkedListBack (struct linkedList *q) {
  assert(!LinkedListIsEmpty(q));
  return q->backSentinel->prev->value;
}
