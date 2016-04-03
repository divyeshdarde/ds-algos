package singlylinkedlist;

class Node {
	int data;
	Node next;

	// Constructor
	Node(int data) {
		this.data = data;
		next = null;
	}
}

class LinkedList {
	private Node head;

	// Constructor
	LinkedList() {
		head = null;
	}

	// We have to traverse through the entire linked list to insert the element
	// at the end. Thus the time complexity of this type of insertion is O(N).
	// This means that the insertion time is proportional to the number of
	// elements N in the linked list.
	void insertAtEnd(int data) {
		// Make a node of the data:
		Node newNode = new Node(data);

		// If head == null, then the list is empty. Then we just assign the head
		// as the newNode.
		if (head == null) {
			head = newNode;
		} else {
			// If head is not null, then we have some elements in the list and
			// we have to traverse from the head to the last node now.

			Node current = head;
			while (current.next != null) {
				current = current.next;
			}

			// Now current is the last element.
			current.next = newNode;
		}
	}

	// This is specialized insert where you insert the element at the first
	// position in the linked list. This takes place in three 'constant time'
	// steps:
	// 1) Make the newNode (Assumed to take 1 unit of time)
	// 2) newNode.next will be the current first element. (head) (Assumed to
	// take 1 unit of time)
	// 3) Make the newNode the new head. (Assumed to take 1 unit of time)

	// Assuming the above criteria, inserting an element at the beginning of the
	// linked list will ALWAYS take 3 units of time, irrespective of the number
	// of elements N present in the linked list. Such an operation is said to be
	// taking 'constant time'. It is called constant time because it does not
	// change with the amount of data.

	// In asymptotic notation this is denoted as O(1)
	void insertAtFirst(int data) {
		// Make the new node:
		Node newNode = new Node(data);
		if (head == null) {
			head = newNode;
		} else {
			newNode.next = head;
			head = newNode;
		}
	}

	// Algorithm:
	// 1) Traverse till the (x-1)th node (Takes time proportional to N). In this
	// process, you might want to maintain two pointers, a prev (x-1)th and a current(x)th.
	// 2) prev.next = newNode (1 unit of time) and newNode.next = current (1 unit of time)
	
	// Since we are traversing, the total average time complexity is O(N). We
	// can't improve this.
	void insertAtPositionX(int data, int x) {
		// Left as TODO
	}
}

public class MyLinkedListExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
