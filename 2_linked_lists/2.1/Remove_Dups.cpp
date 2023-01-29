//
// Created by Donghao on 1/24/2023.
//

#include "Remove_Dups.h"

#define DEBUG 0

namespace CtCI {
    bool myString_2_1::Remove_Dups1(LinkedList::Node *current) {
        /*
        if (!current || (!current->next)) {
            return false;
        }
        */
        LinkedList::Node *runner;
        while (current && current->next) {
            runner = current;
#if DEBUG
            cout << "---------------------------------------------------------------" << endl;
#endif
            while (runner->next) {
#if DEBUG
                cout << current->data << " : " << runner->next->data << endl;
#endif
                if (current->data == runner->next->data) {
                    runner->next = runner->next->next;
                } else {
                    runner = runner->next;
                }
            }
            current = current->next;
#if DEBUG
            LinkedList::printNodes(head);
#endif
        }
        return false;
    }

    bool myString_2_1::Remove_Dups2(LinkedList::Node *current) {
        if (!current || (!current->next)) {
            return false;
        }
        unordered_map<int, int> nodeMap;
        LinkedList::Node *runner = current->next;
        nodeMap[current->data] = 1;
        while (runner) {
            while (runner && nodeMap.find(runner->data) != nodeMap.end()) {
                runner = runner->next;
            }
            current->next = runner;
            current = runner;
            if (runner) {
                nodeMap[runner->data] = 1;
                runner = runner->next;
            }
        }
        return false;
    }

    int myString_2_1::unitTest() {

        vector<bool (*)(LinkedList::Node *current)> functionSet;
        functionSet.push_back(Remove_Dups1);
        functionSet.push_back(Remove_Dups2);
        vector<vector<int> > testSet = {{1, 2, 1, 3, 5, 4, 5, 6, 6},
                                        {1},
                                        {}
        };
        LinkedList::Node *head[testSet.size()];

        for (int i = 0; i < functionSet.size(); i++) {
            cout << endl << "Function " << (i + 1) << ": " << endl;
            for (int j = 0; j < testSet.size(); j++) {
                head[j] = nullptr;
                LinkedList::insertNodes(head[j], testSet[j]);

                cout << endl << "Origin: ";
                LinkedList::printNodes(head[j]);
                cout << "Status: " << boolalpha << functionSet[i](head[j]) << endl;
                cout << "Output: ";
                LinkedList::printNodes(head[j]);
            }
        }

        return 0;
    }
} // CtCI