# DSA_assignment_01
Question no.1-
Operations of Stack

A stack is a linear data structure that follows the LIFO (Last In First Out) principle. It means the element which is inserted last will be removed first.

1. Push Operation

Push operation is used to insert a new element into the stack. The new element is always added at the top position. Before inserting an element, we check whether the stack is full or not.

2. Pop Operation

Pop operation is used to remove the top element from the stack. After removing the element, the top position is decreased by one. If the stack is empty, the pop operation cannot be performed.

3. Peek Operation

Peek operation is used to see the top element of the stack without removing it. It helps us to know which element is currently present at the top.

4. Display Operation

Display operation is used to show all the elements present in the stack. It starts from the top and displays each element one by one until it reaches the bottom.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Push      | O(1)            |
| Pop       | O(1)            |
| Peek      | O(1)            |
| Display   | O(n)            |


**Note:** Here, `n` represents the number of elements present in the stack.

## Space Complexity

| Operation | Space Complexity |
|-----------|------------------|
| Push      | O(1)             |
| Pop       | O(1)             |
| Peek      | O(1)             |
| Display   | O(1)             |

**Note:** All operations require constant extra space, regardless of the number of elements in the stack.
