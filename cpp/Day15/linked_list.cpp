Node* insert(Node *head,int data)
{
  //Complete this method
  Node* node = new Node(data);

  Node* temp = head;
  while(temp && (temp->next != NULL)){
    temp = temp->next;
  }

  if(head == NULL){
    head = node;
  }else{
    temp->next = node;   
  }

  return head;
}
