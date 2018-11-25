if (idx < 0) idx += ht->tablesize;

while(ht->table[idx] != 0)
{
  idx = idx + 1;
  if(idx >= ht -> tableSize)
    idx = 0;
 }
 
 ht -> table[idx] = val;
 
 
int openHashTableBagContains (struct openHashTable *ht, TYPE newValue) {

int idx;

idx = HASH(newValue) % ht->tablesize;
 if (idx < 0) idx += ht->tablesize;



void _resizeOpenHashTable (struct openHashTable *ht) {

int oldTableSize = ht->tableSize;
ht->tableSize = 2* ht->tableSize;

TYPE **oldArray = ht->table;

ht->table = (TYPE **)malloc(ht->tableSize * sizeof(TYPE *));

assert(ht->table != 0);

  for(i=0; i < oldTableSize i++)
  {
  if(oldArray[i] != 0)
    addOpenHashTable(ht, oldArray[i]); 
  }

free(oldArray);
}
