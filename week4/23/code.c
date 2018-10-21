void dynArrayIteratorInit (struct dynArray *da, struct dynArrayIterator *itr) {
    assert(da != 0);
    assert(itr != 0);
    itr->da = da;
    itr->currentIndex = 0;
}


int dynArrayIteratorHasNext (struct dynArrayIterator *itr) {
    assert(itr != 0);
    if (itr->currentIndex < itr->da->size)
    {
      return 1;
    }
      return 0;
}


TYPE dynArrayIteratorNext (struct dynArrayIterator *itr) {
   	assert(DynArrIteratorHasNext(itr));
	return itr->da->data[itr->currentIndex++];
}


void dynArrayIteratorRemove (struct dynArrayIterator *itr) {
	assert(itr != 0);
  	dynArrayRemoveAt (itr->da, itr->currentIndex);
 	itr->currentIndex--;
}
