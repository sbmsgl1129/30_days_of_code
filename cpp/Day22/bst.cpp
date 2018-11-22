int getHeight(Node* root){
  //Write your code here
  if(root == NULL || (root->left == NULL && root->right == NULL)){
    return 0;
  }else{
    int left_tree_height = getHeight(root->left);
    int right_tre_height = getHeight(root->right);

    return 1 + (left_tree_height > right_tre_height ? left_tree_height : right_tre_height);
  }
}
