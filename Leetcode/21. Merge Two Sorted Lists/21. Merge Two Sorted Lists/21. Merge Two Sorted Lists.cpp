
#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{

	if (l1 == NULL)
	{
		return l2;
	}

	if (l2 == NULL)
	{
		return l1;
	}

	// if value pointed by l1 pointer is less than equal to value pointed by l2 pointer
	// we wall call recursively l1 -> next and whole l2 list.
	if (l1->val <= l2->val)
	{
		l1->next = mergeTwoLists(l1->next, l2);
		return l1;
	}
	// we will call recursive l1 whole list and l2 -> next
	else
	{
		l2->next = mergeTwoLists(l1, l2->next);
		return l2;
	}
}

void printList(ListNode* head) {
	while (head != nullptr) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	// Example 1
	ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
	ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
	cout << "Example 1 Output: ";
	printList(mergeTwoLists(list1, list2));

	// Example 2
	ListNode* list3 = nullptr;
	ListNode* list4 = nullptr;
	cout << "Example 2 Output: ";
	printList(mergeTwoLists(list3, list4));

	// Example 3
	ListNode* list5 = nullptr;
	ListNode* list6 = new ListNode(0);
	cout << "Example 3 Output: ";
	printList(mergeTwoLists(list5, list6));
}
