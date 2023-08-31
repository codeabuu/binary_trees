# 0x1D. C - Binary trees

This is a TEAM Project done during **Full Stack Software Engineering studies** at **ALX School**. The objective of this project is 

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree


## Technologies
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 14.04 LTS
* Team Member: Lawrence Maduabuchi
* Date: April 27th 2023




## Files
All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| ` 0-print_list.c`| Write a function that prints all the elements of a list_t list.|
| ` 1-list_len.c` | Write a function that returns the number of elements in a linked list_t list.|
| ` 2-add_node.c` | Write a function that adds a new node at the beginning of a list_t list.|
| ` 3-add_node_end.c` | Write a function that adds a new node at the end of a list_t list.|
| ` 4-free_list.c` | Write a function that frees a list_t list..|
| ` 100-first.c` | Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.|
| ` 101-hello_holberton.asm` | Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.|

<center> <h1>BINARY TREES</h1> </center>				
<p></p>

* Trees are simply nodes connected together.
* Binary tree is a kind of data structure used for storage purposes.
* Each node of a binary tree can only have a maximum of two nodes called the children.
* A simple binary tree consists of the ROOT, PATH AND CHILD nodes.
* The root node is the node at the top of the tree. A tree can only have one root node and one path from the root node to any other node.

* The path is the sequence of nodes along the edges of a tree.
* The child node is the node below a given node connected by its edge downward.
* The child node is of two types - The LEFTCHILD and The RIGHTCHILD.
<p>According to the Binary Search Tree Representation the rightchild node is the node with its value greater than the value of its parent node.</p>

## Meanwhile the Parent node is any node except the root node with one edge upward. Leaf node is the node without any child node, that is, the last or tail node at the end of every binary tree.
* Subtree is the descendants of a node.
* Visiting is all about checking the value of a node when control is on the node.
* Traversing is all about passing through nodes in a specific order.
----------------------------------------------------------------------------------------------------
## Binary Search Tree(BST) has basic operations which include:
Insert: inserting an element in a tree or creating a tree.
Search: searching for an element in a tree.
Preorder Traversal: traversing a tree in a pre-order way.
Inorder Traversal: traversing a tree in an in-order way.
Postorder Traversal: traversing a tree in a post-order way.

## Insert Operation:
The first insert operation in a tree is to create a tree. To insert an element in a tree first locate its location. Search from the root node and if the value you are looking for is less than the root node value, search for the empty location in the left subtree or node and insert the data or element. Otherwise, search for the empty location in the right subtree or node and insert the element or data.

## Search Operation:
To perform a search for an element in a tree, start from the root node. If the value of the element being searched for is less than the that of the root node search for the element in the left subtree or node. Otherwise, search for the elment in the right subtree or node.

## Preorder Traversal:
This type of traversal method is a situation whereby the root node is visited first, then the left subtree or node and finally to the right subtree or node.

## Inorder Operation:
This type of traversal method is a situation whereby the left subtree or node is visited first, then the root node and finally the right subtree or node.

## Postorder Operation:
This type of traversal method is a situation whereby the left subtree or node is visited first, then the right subtree or node and finally the root.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
