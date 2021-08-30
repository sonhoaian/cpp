#include <test.h>

#define MAX_EXE 3

int main(){
    int a;

    cout << "the total number of Exer is: " << MAX_EXE << endl;
    cout <<"input your excercise number: ";
    cin >> a;

    //using switch case
    switch (a){
    case 1:{
        IntroHelloWold();
        break;
    }
    case 2:{
        SimpleInOut();
        break;
    }
    case 3:{
        SortNumber();
        break;
    }
    default:
    {
        cout << "no applicable excercise";
    }

    }

    return 0;
}
