void dyArrayDictionaryGet (struct dynArr *da, KEYTYPE key, VALUETYPE *valptr) { 
  struct association *ap;
  int i = 0;
  if(dyArrayDictionaryContainsKey(da, key))
  {
  for (i = 0; i < da->size; i++) 
  {
    if (EqKey(key, dy->data[i])->key)
    {
      ap = dyArrayGet(da, i); 
      *valptr=ap->value;
    }
  }
}

int dyArrayDictionaryContainsKey (struct dynArr *da, KEYTYPE key) {
  
  int i = 0;
  for (i = 0; i < da->size; i++) 
  {
    if (EqKey(key, dy->data[i])->key)
      return 1;
  }
  return 0;
}

void dyArrayDictionaryRemove (struct dynArr *da, KEYTYPE key) {

  for (i = 0; i < da->size; i++)
    if (EqKey(key, dy->data[i])->key)
      dyArrayRemoveAt(da, i);
}
