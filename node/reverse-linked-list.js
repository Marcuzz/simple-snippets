/*
 * Reverse the nodes in a linked list, given the current head
 *
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode next;
 * }
 *
 */
function reversePrint(head) {
    if (!head) {
        return;
    }

    reversePrint(head.next);
    console.log(head.data);
}
