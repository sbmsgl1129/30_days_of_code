// Add your code here
Difference(vector<int> elements): elements(elements), maximumDifference(0){ 
}

void computeDifference(){
  auto min_max = minmax_element(elements.begin(), elements.end());
  maximumDifference = (*min_max.second) - (*min_max.first);
}
