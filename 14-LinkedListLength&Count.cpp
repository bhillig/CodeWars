// 14 - Linked List Length & Count (CodeWars Exercise)

// Implement Length() to count the number of nodes in a linked list.

// Implement Count() to count the occurrences of an integer in a linked list.

struct Node {
  Node * next;
  int data;
}

int Length(Node* head)
{
	int length = 0;

	Node* curr = head;
  
	while (curr)
	{
		++length;
		curr = curr->next;
	}
  
	return length;
}

int Count(Node *head, int data)
{
	int counter = 0;
  
	Node* curr = head;
  
	while (curr)
	{
		if (curr->data == data) ++counter;
    
		curr = curr->next;
	}
  
	return counter;
}