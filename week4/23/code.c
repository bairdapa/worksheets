void dynArrayIteratorInit (struct dynArray *da, struct dynArrayIterator *itr) {
    itr->da = da;
    itr->currentIndex = 0;
}


int dynArrayIteratorHasNext (struct dynArrayIterator *itr) {
    if (itr->currentIndex < itr->da->size)
    {
	    itr->currentIndex++;
      return 1;
    }
return 0;
}


TYPE dynArrayIteratorNext (struct dynArrayIterator *itr) {
   return itr->da->data[itr->currentIndex];
}


void dynArrayIteratorRemove (struct dynArrayIterator *itr) 
{
  dynArrayRemoveAt (itr->da, itr->currentIndex);
  itr->currentIndex--;
}
