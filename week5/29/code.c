void initBST(struct BinarySearchTree *tree) {
	tree->size = 0;
	tree->root = 0;
}

void addBST(struct BinarySearchTree *tree, TYPE newValue) {
	tree->root = _nodeAddBST(tree->root, newValue);
	tree->size++;
}

int sizeBST (struct BinarySearchTree *tree) {
	return tree->size;
}
	
struct Node * _nodeAddBST (struct Node *current, TYPE newValue) {
	assert(current != NULL);
	struct Node *newNode;
	
	if(current == 0)
	{
		newNode = malloc(sizeof(struct Node));
		assert(newNode != 0);
		newNode->value = value;
		newNode->left = newNode->right = 0;
		return newNode;	
	}
	else if(value < current->value) 
	{
		current->left = _addNode(current->left, value);
	}
	else 
	{ 
		current->right = _addNode(current->right, value);
	}

	return current;
}

int containsBST (struct BinarySearchTree *tree, TYPE d) {
	struct Node *current = tree->root;
	
	while(current != 0)
	{
		if(current->value == value) 
			return 1;
		else if(value < current->value) 
			current = current->left;
		else
			current = current->right;
	}
	
	return 0;
}

void removeBST (struct BinarySearchTree *tree, TYPE d) {
	if (containsBST(tree, d) {
		tree->root = _nodeRemoveBST(tree->root, d);
		tree->size--;
	}
}

TYPE _leftMostChild (struct Node * current) {
	assert(current != 0);
	while(current->left != 0)
	{
		current = current->left;
	}
	
	return current->value;
}

struct node * _removeLeftmostChild (struct Node *current) {
	assert(current != 0)
	
	struct Node *temp = current->right;

	if(current->left == 0) 
	{
		free(current);
		return temp;
	} 
	else 
	{ 
		current->left = _removeLeftMostChild(current->left);
	}

	return current;
}

struct Node * _nodeRemoveBST (struct Node * current, TYPE d) {
	if(current->value == value) 
	{
		if(current->right = 0) 
		{	
			struct node *temp = current->left;
			free(current);
			return temp;
		}
		else 
		{
			current->value = _leftMostChild(current->right);
			current->right = _removeLeftMostChild(current->right);
		}
	} 
	else if(value < current->value) 
	{
		current->left = _nodeRemoveBST(current->left, value);
	} 
	else 
	{ 
		current->right = _nodeRemoveBST(current->right, value);
	}

	return current;
}
