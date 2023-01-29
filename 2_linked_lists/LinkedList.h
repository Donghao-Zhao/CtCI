//
// Created by Donghao on 1/28/2023.
//

#ifndef CTCI_LINKEDLIST_H
#define CTCI_LINKEDLIST_H

#include "../include.h"

namespace CtCI {
    class LinkedList {
    public:
        class Node {
        public:
            int data = 0;
            Node *next = nullptr;
        };

        static void insertNodes(Node *&head, vector<int> units);

        static void printNodes(Node *current);
    };

} // CtCI

#endif //CTCI_LINKEDLIST_H
