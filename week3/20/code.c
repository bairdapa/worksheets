void _dequeSetCapacity (struct deque *d, int newCap) {
  int i;
  /* Create a new underlying array*/
  TYPE *newData = (TYPE*)malloc(sizeof(TYPE)*newCap);
  assert(newData != 0);
  /* copy elements to it */
  int j = d->beg;
  for(i = 0; i < d->size; i++) {
    newData[i] = d->data[j];
    j = j + 1;
    if(j >= d->capacity)
      j = 0;
  }
  /* Delete the oldunderlying array*/
  free(d->data);
  /* update capacity and size and data*/
  d->data = newData;
  d->capacity = newCap;
  d->beg = 0;
}

void dequeFree (struct deque *d) {
  free(d->data); d->size = 0; d->capacity = 0;
}

struct deque {
  TYPE * data;
  int capacity;
  int size;
  int beg;
};

void dequeInit (struct deque *d, int initCapacity) {
  d->size = d->beg = 0;
  d->capacity = initCapacity; assert(initCapacity > 0);
  d->data = (TYPE *) malloc(initCapacity * sizeof(TYPE));
  assert(d->data != 0);
}

int dequeSize (struct deque *d) {
  return d->size;
}

void dequeAddFront (struct deque *d, TYPE newValue) {
  if (d->size >= d->capacity) _dequeSetCapacity(d, 2*d->capacity);
}

void dequeAddBack (struct deque *d, TYPE newValue) {
  if (d->size >= d->capacity) _dequeSetcapacity(d, 2* d->capacity);
}

TYPE dequeFront (struct deque *d) {

}

TYPE dequeBack (struct deque *d) {
  
}

void dequeRemoveFront (struct deque *d) {
  
}

void dequeRemoveBack (struct deque *d) {
  
}
