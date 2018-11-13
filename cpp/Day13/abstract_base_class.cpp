/ Write your MyBook class here
class MyBook: public Book{

  //   Class Constructor
  //   
  //   Parameters:
  //   title - The book's title.
  //   author - The book's author.
  //   price - The book's price.
  //
  // Write your constructor here
  public:
    MyBook(string title, string author, int price): Book(title, author), book_price(price){ }
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display(){
      cout << "Title: "  << this->title  << '\n';
      cout << "Author: " << this->author << '\n';
      cout << "Price: "  << this->book_price  << '\n';
    }
  private:
    int book_price;
};
// End class
