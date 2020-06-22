#include<iostream>
#include<string>
#include<memory>
using namespace std;

class User{
    public:
    User(){
        cout<<"User Created\n";
    }
    ~User(){
        cout<<"User destroyed\n";
    }

    void testFunc(){
        cout<<"I am a test \n";
    }
};


int main()
{
    {
        // unique_ptr<User> sam(new User());

        unique_ptr<User> sam = make_unique<User> ();

        sam -> testFunc();

        //not allowed
        // here it is not overloaded
        // unique_ptr<User> samm = sam;
    }

    //shared pointer
    {
        shared_ptr<User> tim = make_shared<User>();
        shared_ptr<User> tim2 = tim;
    }

    cout<<"Outside Code\n";

    return 0;
}