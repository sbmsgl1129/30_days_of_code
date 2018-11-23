void levelOrder(Node * root){
  //Write your code here
  if(root == NULL){
    return;
  }

  //making a queue of nodes and pushing root
  queue<Node*> node_ptrs_queue;
  node_ptrs_queue.push(root);

  while(!node_ptrs_queue.empty()){

    //printing the value
    Node* cur = node_ptrs_queue.front();
    cout << cur->data << ' ';

    //Push the children
    if(cur->left){
      node_ptrs_queue.push(cur->left);
    }
    if(cur->right){
      node_ptrs_queue.push(cur->right);
    }

    //Remove the element
    node_ptrs_queue.pop();

  }
}
