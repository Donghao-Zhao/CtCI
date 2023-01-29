//
// Created by Donghao on 1/28/2023.
//

#include "LinkedList.h"

namespace CtCI {
    void LinkedList::printNodes(Node *current) {
        while (current) {
            cout << current->data << " --> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void LinkedList::insertNodes(Node *&head, vector<int> units) {
        for (int i = ((int) units.size() - 1); i >= 0; i--) {
            Node *newNode = new Node;
            newNode->data = units[i];
            newNode->next = head;
            head = newNode;
        }
    }
} // CtCI