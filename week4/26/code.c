Add      -  O(1)+ | O(1) | O(n)
Contains -  O(n)  | O(n) | O(log n)
Remove   -  O(n)  | O(n) | O(n)


1.	What is the algorithmic complexity of the binary search algorithm?
 Aglorithmic complexity of binary search is O(log n)
 
2.	Using your answer to the previous question, what is the algorithmic complex of the method contains for an OrderedArrayBag?
 OrderedArrayBag uses binary search for the target value so the algorithmic complexity would be O(log n).

3.	What is the algorithmic complexity of the method addAt?
 O(n), since there is extra work to loop through every element in the array.
 
4.	Using your answer to the previous question, what is the algorithmic complexity of the method add for an OrderedArrayBag?
 The binary search algorithm has O(log n). The addAt function as O(n) complexity which dominates O(log n). The function therefore would have O(n) complexity.

5.	What is the complexity of the method removeAt? of the method remove?
 removeAt uses a binary search algorithm which is O(log n) complexity, but will be dominated by the O(n) operation when the removed element position is filled. 
 The function would therefore be O(n). complexity.
