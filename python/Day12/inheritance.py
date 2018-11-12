class Student(Person):
    #   Class Constructor
    #   
    #   Parameters:
    #   firstName - A string denoting the Person's first name.
    #   lastName - A string denoting the Person's last name.
    #   id - An integer denoting the Person's ID number.
    #   scores - An array of integers denoting the Person's test scores.
    #
    # Write your constructor here
    def __init__(self, firstName, lastName, id, testScores):
        Person.__init__(self, firstName, lastName, id)
        self.testScores  = testScores

    #   Function Name: calculate
    #   Return: A character denoting the grade.
    #
    # Write your function here
    def calculate(self):
        average = sum(self.testScores)/len(self.testScores)
        if average >= 90:
            return 'O'
        elif average >=80:
            return 'E'
        elif average >= 70:
            return 'A'
        elif average >= 55:
            return 'P'
        elif average >=40:
            return 'D'
        else:
            return 'T'

