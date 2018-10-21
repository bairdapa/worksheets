int linkedListIteratorHasNext (struct linkedListIterator *itr) {
   assert(itr != 0);
   
   if(itr->currentLink->next != itr->lst->backSentinel){
      itr->currentLink = itr->currentLink->next
      return 1;
   }
   else{
      return 0;
   }
}

TYPE linkedListIteratorNext (struct linkedListIterator *itr) {
   assert(linkedListIteratorHasNext(itr));
   return itr->currentLink->value;
}


void linkedListIteratorRemove (struct linkedListIterator *itr) {
   assert(itr != 0);
   
   struct Dlink *temp = itr->currentLink;
   itr->currentLink = itr->currentLink->prev;
   _removeLink(itr->lst, temp);
}

