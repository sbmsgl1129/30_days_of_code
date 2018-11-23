def levelOrder(self,root):
    #Write your code here
    if root is None:
        return

    node_ptrs_queue = [root]
    while node_ptrs_queue:
        cur = node_ptrs_queue.pop(0)
        print(cur.data, end =' ')
        
        if cur.left is not None:
            node_ptrs_queue.append(cur.left)
        if cur.right is not None:
            node_ptrs_queue.append(cur.right)

