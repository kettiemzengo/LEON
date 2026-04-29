#include <iostream>
using namespace std;
class phonebook{
    private :
    contact* contacts;
    int count;
    int size;
    public :
phonebook(){
    size = 5;
    count = 0;
    contacts = new contact[size];
};
private :
void AddContact(contact c){
    if (count < size){
        count[contacts] = c;

    } else{
        cout << "phoneBook is full" << endl;
    }
}
};

void showAllContacts() {
    for (int i = 0; i < count; i++)
  cout << [i]. getFirstName()
} 

