/**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     struct ListNode *next;
  * };
  */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* head = malloc(sizeof(struct ListNode));
	memset(head, 0, sizeof(struct ListNode));
	struct ListNode* temp = head;
	struct ListNode* l1_temp = l1;
	struct ListNode* l2_temp = l2;

	if (!(l1 && l2)) {
		free(head);
		return NULL;
	}

	int remainder = 0;
	while (l1_temp || l2_temp) {
		struct ListNode *current = malloc(sizeof(struct ListNode));
		memset(current, 0, sizeof(struct ListNode));
		if (l1_temp == NULL) {
			if (0 == remainder) {
				temp->next = l2_temp;
				break;
			} else {
				current->val = l2_temp->val + 1;
			}
		} else if (l2_temp == NULL) {
			if (0 == remainder) {
				temp->next = l1_temp;
				break;
			} else {
				current->val = l1_temp->val + 1;
			}
		} else {
			current->val = l1_temp->val + l2_temp->val + remainder;
		}
		if (current->val >= 10) {
			current->val %= 10;
			remainder = 1;
		} else {
			remainder = 0;
		}
		temp->next = current;
		temp = current;
		l1_temp = l1_temp ? l1_temp->next: l1_temp;
		l2_temp = l2_temp ? l2_temp->next: l2_temp;
	}
	
	if (remainder == 1) {
		struct ListNode *last_node = malloc(sizeof(struct ListNode));
		memset(last_node, 0, sizeof(struct ListNode));
		last_node->val = 1;
		temp->next = last_node;
	}
	return head->next; 
}

