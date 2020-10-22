/*
 * Deletes the linkedList node at a given position
 *
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode next;
 * }
 *
 */
function deleteNode(head, position) {
    if(position === 0){
        return head.next;
    }
    
    /* 
     * note to future self:
     * javascript is reference based, it's like we're browsing through a book, 
     * stopping at a certain page and then RIPPING IT OUT, or well, in this case
     * it's more like we just forget about it because we replace it with the next page
     * and shift all the pages back one
     */
    let current = head;
    let prev = head;

    while (position > 0) {
        prev = current;
        current = current.next; 

        position--;
    }
    
    prev.next = current.next;
    
    return head;
}
