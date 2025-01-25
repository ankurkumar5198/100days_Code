Node* findFirstNode(Node* head) {
        // your code here
        if (!head)

            return nullptr;

        auto slow = head;

        auto fast = head;

        while (fast and fast->next) {

            slow = slow->next;

            fast = fast->next;

            if(fast->next)

                fast = fast->next;

            if (slow == fast)

                break;

        }

        if (slow != fast)

            return nullptr;

        slow = head;

        while (slow != fast) {

            slow = slow->next;

            fast = fast->next;

        }

        return fast;

    }
