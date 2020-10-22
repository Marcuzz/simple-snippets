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
 * Complexity: O(n) time and O(1) space
 * We could use recursion which would be more elegant but it would require O(n) space on the stack
 *
 */
function reverseList(head) {
  let node = head,
    previous,
    tmp;

  while (node) {
    tmp = node.next;

    // replace next with the previous while we walk forwards
    // this is sort of like doing the moonwalk, Michael Jackson-style
    node.next = previous;

    // walk forward until we can't no more
    previous = node;
    node = tmp;
  }

  return previous;
}
