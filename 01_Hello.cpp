// using namespace std;   or we can use (inline namespace) std:: in the begining of every namespace.

#include<iostream>
// # is a pre-processor and iostream is a file wherer input and output functions are defined.
using namespace std;
// by above statement we are using every thing in standard namespace scope.

namespace mynamespace {
    class myclass{
    public:
    void funcinside(){
        cout<<"myclass func is called \n";
    }
    };
    void funcoutside(myclass){}
}
// evey cpp program begins with a main function. It means you have to start from here.
int main(){
    cout<<"Hello World !! \n"; // it displays the output to the console. << means "thing inside it" is send to cout function.

    mynamespace::myclass myobj;
    myobj.funcinside(); // myclass func is called ... we can also use this like using namespace mynamespace; in declaring it in global space.
    mynamespace::funcoutside(myobj); // here we are calling outside fuction.

    return 0; // here we have to return any value of type of which we declared the function before.
}

// we can also create a nested namespace .