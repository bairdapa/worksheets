void treeSort (TYPE *data, int n) { /* sort values in array data */ 
  AVLtree tree;
  AVLtreeInit (&tree);

  for(int i = 0; i < n; i++) AVLtreeAdd(&tree, data[i]);
  
  AVLIterator itr;
  AVLIteratorInit(tree, &itr);
  
  for(int i = 0; i < n; i++) data[i] = AVLIteratorNext(&itr);
}
