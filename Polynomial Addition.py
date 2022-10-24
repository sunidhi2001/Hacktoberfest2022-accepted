"""
 class node:
    def __init__(self, coeff, pwr):
        self.coef = coeff
        self.next = None
        self.power = pwr
"""


class Solution:
    # return a linked list denoting the sum with decreasing value of power
    def addPolynomial(self, head1, head2):
        cur1 = head1
        cur2 = head2
        prev1 = prev2 = None
        while cur1 and cur2:
            if cur1.power == cur2.power:
                cur1.coef += cur2.coef
                prev1 = cur1
                prev2 = cur2
                cur1 = cur1.next
                cur2 = cur2.next
            elif cur1.power > cur2.power:
                prev1 = cur1
                cur1 = cur1.next
            elif cur1.power < cur2.power:
                temp = cur2
                pow = cur1.power
                while temp.power > pow:
                    fuck = temp
                    temp = temp.next
                    if temp == None:
                        break
                if prev1 != None:
                    prev1.next = cur2
                    fuck.next = cur1
                    cur2 = temp
                else:
                    temp2 = fuck.next
                    fuck.next = cur1
                    head1 = cur2
                    cur2 = temp2
        if cur2 != None:
            prev1.next = curr2
        return head1
