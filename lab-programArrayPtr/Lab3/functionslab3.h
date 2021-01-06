
    void LabInfo() {//LabInfo function.
    cout << "Stephen McDonagh\n";//Prints out name.
    cout << "Lab #3" << endl;//Prints out lab number.
 }

    void printArrMem(int myArray[],int arrayS){//printArrMem function.
    for(int i = 0; i < arrayS; i++){//For loop. Code block to be executed.
    cout <<"The value "<<myArray[i]<<": is stored at memory address "<<&myArray[i]<<endl;//Prints out result.
            }
 }

    void mScalar(int scalar, int *j, int arrayS){//mScalar function.
    for(int i = 0; i < arrayS; i++){//For loop. Code block to be executed.
    *j = *j*scalar;//Sum, multiplies each number in the array by scalar.
    j++;//Increments j.
    }
    }


    void xmasTree(){//xmasTree function.
    string arr2dTree[12][2]={
                            {"           ","*            "},
                            {"           ","X            "},
                            {"          X","XX           "},
                            {"         XX","XOX          "},
                            {"        XXX","XXXX         "},
                            {"       XXOX","XXXXX        "},
                            {"      XXXXX","XXOXXX       "},
                            {"     XXOXXX","XXXXXOX      "},
                            {"    XXXXXXX","OXXXXXXX     "},
                            {"          |","+|           "},
                            {"          |","+|           "},
                            {" -----------","----------- "}};

    for(int i = 0; i < 12; ++i){//For loop.
    for(int j = 0; j < 2; ++j){//For loop.
    cout<<arr2dTree[i][j];//Prints out the xmas tree.
}
    cout<<endl;
}
    cout<<" Merry CHRISTMAS 2020!!"<<endl;//Prints out message.
    cout<<" ----------------------"<<endl;
}

