int count = 0;
        Node *curr = *head; // dereference the double pointer to get the actual head
        
        while (curr) {
            curr = curr->next;
            count++;
        }
        // Return true if count is even, else false
        return count % 2 == 0;
