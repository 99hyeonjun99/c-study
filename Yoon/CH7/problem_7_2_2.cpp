#include <iostream>
#include <cstring>
using namespace std;

class Book{
    private:
        char *title;
        char *isbn;
        int price;
    public:
        Book(char* ptitle, char* pisbn, int pprice): price(pprice){
            title=new char(strlen(ptitle)+1);
            strcpy(title, ptitle);

            isbn=new char(strlen(pisbn)+1);
            strcpy(isbn,pisbn);
        }

        void ShowBookInfo(){
            cout<<"title: "<< title<<endl;
            cout<<"booknumber: "<<isbn<<endl;
            cout<<"price: "<<price<<endl;
        }
};

class Ebook :public Book{
    private:
        char* DRMkey;
    public:
        Ebook(char* ptitle, char* pisbn, int pprice, char* pDRMkey): Book(ptitle, pisbn, pprice){
            DRMkey= new char(strlen(pDRMkey)+1);
            strcpy(DRMkey,pDRMkey);
        }

        void ShowEBookInfo(){
            Book::ShowBookInfo();
            cout<<"DRMKey: "<<DRMkey<<endl;
        }
};

int main(){
    Book book("Good c++", "555-12345", 20000);
    book.ShowBookInfo();
    cout<<endl;

    Ebook ebook("good c++", "555-12345", 10000, "fdx9w");
    ebook.ShowEBookInfo();
    return 0;
}