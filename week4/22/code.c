int linkedListContains (struct linkedList *lst, TYPE e) {
  struct linkedList tmp = lst->frontSentinel->next;
  while(tmp != lst->backSentinel) 
  {
		if(tmp->value == e) 
    {
			return 1;
    }
  tmp = tmp->next;
  }
return 0;
}


void linkedListRemove (struct linkedList *lst, TYPE e) {
  struct linkedList tmp = lst->frontSentinel->next;
	int found = 0;
  while(tmp != lst->backSentinel && found != 1) 
  {
		if (tmp->value == e) 
    {
			_removeLink (lst, tmp);
      found = 1;
		}
  tmp = tmp -> next;
	}
}

