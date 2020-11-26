    //Exercise 1: Create a function called labinfo.
    void labinfo(){//Displays some information about the lab.
    cout<< "Stephen McDonagh\n";//Name.
    cout<< "Lab #2\n" << endl;//Lab number 2.
    }

    //Exercise 2: Create a function that takes two numbers and return the largest.
    void Largest_Val(){//Returns the largest of two values.
    int x;
    int y;
    cout << "Enter an integer value and hit return ";//Prints out command.
    cin>>x;//User inputs a value for x.
    cout << "Enter another integer value and hit return ";//Prints out command.
    cin>>y;//User inputs a value for y.
    if (x > y ){
    cout << "The largest integer value is " << x <<"\n"<< endl;//Prints out this answer if the condition x > y is true.
    }
    else {
    cout<< "The largest integer value is " << y <<"\n"<< endl;//Prints out this answer if the condition x > y is false.
    }
    }

    //Exercise 3: Create a function that can check the user has input a number between 1 and 100.
    void Check_Num(){//Checks numbers are between 1 and 100.
    int num;
    cout<< "Enter a number between 1 and 100 and hit return "<<"\n";//Prints out command.
    cin>>num;//User inputs number.
    if ((1<num)&&(num<100)){//Condition. Check if number is between 1 and 100.
    cout<< "The number "<<num<<" is a number between 1 and 100."<<"\n"<<endl;//Prints message if "if condition" is true.
    }
    else {
    cout<< "The number "<<num<<" is not a number between 1 and 100."<<"\n"<<endl;//Prints message if "if condition" is not true.
    }
    }

    //Exercise 5: Create a function that can calculate the area of circle.
    void Area_Of_A_Circle(){//Finds the area of a circle if user inputs the radius.
    float area, radius;
    float PI=3.14159;
    cout<< "Enter the radius of the circle to find the area of the circle.\n";//Prints command.
    cin>>radius;
    area = PI * radius * radius;//Sum for calculating the area of a circle.
    cout<<"The area of the circle is "<<area<<"\n"<<endl;//Prints out the answer.
    }

    //Exercise 6: Create a function that can calculate the area of a rectangle.
    void Area_Of_A_Rectangle(){//Finds the area of a rectangle if user inputs the lenght and width.
    float lenght, width, area;
    cout<< "Please enter the lenght of the rectangle and hit return: "<<endl;//Prints command.
    cin>>lenght;
    cout<< "Please enter the width of the rectangle and hit return: "<<endl;//Prints command.
    cin>>width;
    area = lenght * width;//Sum for calculating the area of a rectangle.
    cout<< "The area of the rectangle is "<<area<<"\n"<<endl;
    }

    //Exercise 7: Create a function that prints an alarm message if temperature and/or humidity is too high.
    void Temp_Hum_Alarm(){//Takes in temp/hum and prints alarm message if too high.
    float temp, hum;
    cout<< "Please enter the temperature and hit return: "<<endl;//Prints command.
    cin>>temp;
    if (temp>=95){
    cout<< "WARNING TOO HOT ALARM!! WARNING TOO HOT ALARM!! WARNING TOO HOT ALARM!! "<<endl;//Prints alarm warning.
    }
    else {
    cout<< "Temperture is okay. "<<endl;//Prints message.
    }
    cout<< "Please enter the humidity and hit return: "<<endl;//Prints command.
    cin>>hum;
    if (hum>=90){
    cout<< "ALARM! WARNING HUMIDITY TOO HIGH! ALARM!! "<<"\n"<<endl;//Prints alarm warning.
    }
    else {
    cout<< "Humidity is okay. "<<"\n"<<endl;//Prints message.
    }
    }

