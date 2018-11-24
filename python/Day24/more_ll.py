def removeDuplicates(self,head):
  #Write your code here
  if head is None or head.next is None:
      return head
  
  cur = head.next
  prev = head
  while cur is not None:
      if cur.data == prev.data:
	  prev.next = cur.next
	  
	  temp = cur
	  cur = cur.next
	  temp.next = None
      else:
	  prev = cur
	  cur = cur.next
  
  return head
