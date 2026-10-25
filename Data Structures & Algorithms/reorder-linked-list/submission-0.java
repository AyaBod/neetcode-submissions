/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public void reorderList(ListNode head) {
        //lets try fast and slow
        ListNode fast = head;
        ListNode slow = head;

        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;  //when fast finishes slow will be at the middle
        }

        ListNode prev = null; //bc prev will point to new end
        ListNode curr = slow.next;
        slow.next = null; //slow was middle so make it its own list now
        //reverse the slow list
        while (curr != null) {
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        //prev is head of new list

        //merge the lists
        ListNode first = head;  // 1 2
        ListNode second = prev;  // 3 4

        while (second != null) {
            ListNode firstNext = first.next;
            ListNode secNext = second.next;

            first.next = second;  // 1 3 
            second.next = firstNext;  // 1 3 2
            
            first = firstNext;
            second = secNext;

        }

    }
}
