struct AVLnode * _rotateLeft (struct AVLnode * current) {
//FIXME
}
struct AVLnode * _rotateRight (struct AVLnode * current) {
//FIXME
}

void removeAVLTree(struct AVLTree *tree, TYPE val) {
  if (containsAVLTree(tree, val)) {
    tree->root = _removeNode(tree->root, val);
    tree->cnt--;
  }
}

TYPE _leftMost(struct AVLNode *cur) {
  while(cur->left != 0) {
    cur = cur->left;
  }
  return cur->val;
}

struct AVLNode *_removeLeftmost(struct AVLNode *cur) {
  struct AVLNode *temp;
  if(cur->left != 0)
  {
    cur->left = _removeLeftmost(cur->left);
    return _balance(cur);
  }
  temp = cur->rght;
  free(cur);
  return temp;
}

struct AVLNode *_removeNode(struct AVLNode *cur, TYPE val) {
  if(cur->value == value)
  {
    if(cur->right == 0)
    {
      struct AVLNode *removeNode = cur->left;
      free(cur);
    }
    else
    {
      cur->value = _leftMost(cur->right);
      cur->right = _removeLeftmost(cur->right);
    }
  else if(val < cur->value) 
  {
	  cur->left = _removeNode(cur->left, value);
  } 
  else 
  { 
	  cur->right = _removeNode(cur->right, value);  
  }
  _balance(cur);   
  return cur;
}
