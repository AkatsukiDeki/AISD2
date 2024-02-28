#include "LinkedList.h"

template <typename T>
void LinkedList<T>::remove_duplicates() {
    Node<T>* current = head;

    while (current != nullptr) {
        Node<T>* runner = current->next;

        while (runner != nullptr) {
            if (current->data == runner->data) {
                Node<T>* duplicate = runner;
                runner = runner->next;

                if (duplicate == tail) {
                    tail = duplicate->prev;
                }

                if (duplicate == head) {
                    head = duplicate->next;
                }

                if (duplicate->prev) {
                    duplicate->prev->next = duplicate->next;
                }

                if (duplicate->next) {
                    duplicate->next->prev = duplicate->prev;
                }

                delete duplicate;
            }
            else {
                runner = runner->next;
            }
        }

        current = current->next;
    }
}
