void BSTIteratorInit (struct BSTree *tree, struct BSTIterator *itr) {
    itr->tree = tree;
    itr->stk = newDynArr();
}


int BSTIteratorHasNext (struct BSTIterator * itr) {
BNode *n;
 if(isEmptyDynArr(itr->stk))
 {
      slideLeft(itr->tree->root);
 }
 else {
        n = topDynArr(itr->stk);
        popDynArr(itr->stk);
        slideLeft(n->right);
      }     
if(!isEmptyDynArr(itr->stk))
    return 1;
else return 0;
}


TYPE BSTIteratorNext (struct BSTIterator *itr) {
    return (topDynArr(itr->stk))->val;
    
}


void _slideLeft(struct Node *cur, struct BSTIterator *itr)
{
    While(cur->left != null)
    {
        dynArrayPush(Itr->stk, cur-);
        cur = cur->left;
    }
}
