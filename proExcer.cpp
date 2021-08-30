#include <test.h>

//call function
int IntroHelloWold()
{
    cout<<"Hello World" <<endl;
    return 0;
}

int SimpleInOut(){

    //declare an array for inputing data
    string a[2];
    //input data
    cout<< "input your name: " <<endl;
    a[0] = sdtInputData();

    cout << "input your age: " << endl;
    cin >> a[1];

    //Display data
    cout << "your name is : " << a[0] << endl;
    cout << "your age is: " << a[1] << endl;

    return 0;
}

void SortNumber(){
    //input data
    //input total number
    int i_ELM = 0;
    cout <<"Input the total numbers: ";
    cin >> i_ELM;
    int i_array[i_ELM];
    int i_temp = 0;
    for (int i = 0; i<i_ELM; i++){
        cout<< "input "<< i + 1 <<" number : " <<endl;
        cin >> i_array[i];
    }
    //sort data
    for(int i = 0; i <i_ELM;i++){
        for( int j = i + 1; j < i_ELM; j ++){
            if(i_array[i] > i_array[j]){
                i_temp = i_array[j];
                i_array[j] = i_array[i];
                i_array[i] = i_temp;
            }
        }
    }
    //display data
    for(int i = 0; i < i_ELM; i++){
        cout << i_array[i] <<"\t";
    }
    cout << "\n ";

}

