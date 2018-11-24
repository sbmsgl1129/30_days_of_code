Node* removeDuplicates(Node *head)
{
  //Write your code here
  if(head == NULL || head->next == NULL){
    return head;
  }

  Node *temp_prev = head;
  Node *temp_cur = head->next;
  while(temp_cur != NULL){
    int cur_data = temp_cur->data;
    int prev_data = temp_prev->data;

    if(cur_data == prev_data){
      temp_prev->next = temp_cur->next;

      //Deleting the node
      Node* temp = temp_cur;
      temp_cur = temp_cur->next;
      free(temp);

    }else{
      temp_prev = temp_cur;
      temp_cur = temp_cur->next;
    }
  }

  return head;
}
