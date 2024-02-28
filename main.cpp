#include "LinkedList.h"

int main() {
    LinkedList<int> list;

    list.push_tail(1);
    list.push_tail(2);
    list.push_tail(3);
    list.push_tail(4);
    list.push_tail(5);

    list.remove_duplicates();

    return 0;
}
