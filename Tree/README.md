# **TREE IMPORTANT CONCEPTS:**

>### **BINARY TREE**

__Types of Binary Tree:__

1. __Full Binary Tree__ - When a tree has _either 0 or 2_ children!
>The number of leaf nodes is the number of internal nodes plus 1 
> `L = I + 1` (L = LEAF nodes, I = INTERNAL nodes)

2. __Complete Binary Tree__ - All levels should be completely filled, except the last level and the __last level has all keys as left as possible!__
> Example is a __Binary Heap__

3. __Perfect Binary Tree__ - All internal nodes have two children and all leaf nodes are at the same level; A __perfect binary tree is complete too__
>A perfect Binary Tree of height 'h' has ***(2^(h+1) - 1)*** nodes!

4. __Balanced Binary Tree__ - A tree is balanced if its ***height is O(log n)***. Difference between height of left and right subtree is not more than 'k'; DIFF = |Hleft - Hright|.
>Example is AVL tree.




##If using array implementation, the following formula is useful : ***(ONLY USED IN CASE OF A COMPLETE BINARY TREE)***

For any index i:
- the left child is at index 2i+1;
- the right child is  at index 2i+2;


###### HEIGHT OF AN EMPTY TREE = -1
###### HEIGHT OF A TREE WITH ONE NODE = 0


### Number of trees formed by 'n' number of nodes is given by the formula:
> __2nCn/n+1__ (CATALAN NUMBER)


**Formulas for finding number of nodes if height is given**
> Min Nodes: n = h + 1
> Max Nodes: n = (2^(h+1) - 1)

**Formulas for finding height if nodes are given**
>Min height: h = (log(n+1) - 1)
>Max height: h = n - 1

