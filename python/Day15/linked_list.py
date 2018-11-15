def insert(self,head,data): 
  #Complete this method
  node = Node(data)

  #First element
  if head is None:
    head = node
    return head

  #All others
  temp = head
  while temp.next:
    temp = temp.next
  
  temp.next  = node
  return head

