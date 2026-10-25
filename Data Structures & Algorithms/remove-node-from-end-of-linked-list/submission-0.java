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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int count = 0;
        ListNode curr = head;
        while (curr != null) {
            count++;
            curr = curr.next;
        }

        // to go from a b c d is 4 go to 
        if (count == 1) {
            head = null;
        } else if (n == count) {
            head = head.next;
        } else { //count - (n+1) is where you wanna be
            // 1 2 3 4 5   get rid of 3 at 3
            curr = head;
            for (int i = 0; i < (count-n-1); i++) {
                curr = curr.next;
            }
            curr.next = curr.next.next;

        }

        return head;
    }
}
