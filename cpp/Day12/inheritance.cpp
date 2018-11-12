class Student :  public Person{
  private:
    vector<int> testScores;  
  public:
    /*      
     *   Class Constructor
     *   
     *   Parameters:
     *   firstName - A string denoting the Person's first name.
     *   lastName - A string denoting the Person's last name.
     *   id - An integer denoting the Person's ID number.
     *   scores - An array of integers denoting the Person's test scores.
     */
    // Write your constructor here
    Student(string firstName, string lastName, int id, vector<int>& scores): 
      Person(firstName, lastName, id), testScores(scores){ }
    /*      
     *   Function Name: calculate
     *   Return: A character denoting the grade.
     */
    // Write your function here
    char calculate(){
      double sum = 0;

      //for_each(testScores.begin(), testScores.end(), [&sum](int score){sum += score;});
      for(int score : testScores){
        sum += score;
      }
      double average = sum/testScores.size();

      if(average >= 90){
        return 'O';   
      }else if(average >=80 && average < 90){
        return 'E';
      }else if(average >=70 && average < 80){
        return 'A';
      }else if(average >=55 && average < 70){
        return 'P';
      }else if(average >=40 && average < 55){
        return 'D';
      }else{
        return 'T';
      }
    }
};
