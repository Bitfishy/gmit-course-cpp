
   //Exercise 1: Create a function called labinfo.
    void labinfo(){//Displays some information about the lab.#
    cout<< "Stephen McDonagh\n";//Name.
    cout<< "Lab #2\n" << endl;//Lab number 2.

    }

    //Exercise 2: Create a function that takes two numbers and return the largest.
    void Largest_Val(){//Returns the largest of two values.
    int x;//Int Declaration.
    int y;//Int Declaration.
    cout << "Enter an integer value and hit return: ";//Prints out command.
    cin>>x;//User inputs a value for x.
    cout << "Enter another integer value and hit return: ";//Prints out command.
    cin>>y;//User inputs a value for y.
    if (x > y ){//(IF)Condition.
    cout << "The largest integer value is " << x <<"\n"<< endl;//Prints out this answer if the condition x > y is true.
    }
    else {//(ELSE)Condition.
    cout<< "The largest integer value is " << y <<"\n"<< endl;//Prints out this answer if the condition x > y is false.
    }

    }

    //Exercise 3: Create a function that can check the user has input a number between 1 and 100.
    void Check_Num(){//Checks numbers are between 1 and 100.
    int num;//Int Declaration.
    cout<< "Enter a number between 1 and 100 and hit return: "<<"\n";//Prints out command.
    cin>>num;//User inputs number.
    if ((1<num)&&(num<100)){//Condition. Check if number is between 1 and 100.
    cout<< "The number "<<num<<" is a number between 1 and 100."<<"\n"<<endl;//Prints message if "if condition" is true.
    }
    else {//(ELSE)Condition.
    cout<< "The number "<<num<<" is not a number between 1 and 100."<<"\n"<<endl;//Prints message if "if condition" is not true.
    }

    }

    //Exercise 5: Create a function that can calculate the area of circle.
    void Area_Of_A_Circle(){//Finds the area of a circle if user inputs the radius.
    double area, radius;//Float Declaration.
    double PI=3.14159;//Float Declaration.
    cout<< "Enter the radius of the circle to find the area of the circle:\n";//Prints command.
    cin>>radius;//User inputs radius.
    area = PI * radius * radius;//Sum for calculating the area of a circle.
    cout<<"The area of the circle is "<<area<<" meters squared."<<"\n"<<endl;//Prints out the answer.

    }

    //Exercise 6: Create a function that can calculate the area of a rectangle.
    void Area_Of_A_Rectangle(){//Finds the area of a rectangle if user inputs the lenght and width.
    float lenght, width, area;//Float Declaration.
    cout<< "Please enter the lenght of the rectangle and hit return: "<<endl;//Prints command.
    cin>>lenght;//User inputs lenght.
    cout<< "Please enter the width of  of the rectangle and hit return: "<<endl;//Prints command.
    cin>>width;//User inputs width.
    area = lenght * width;//Sum for calculating the area of a rectangle.
    cout<< "The area of the rectangle is "<<area<<" meters squared."<<"\n"<<endl;//Prints out the answer.

    }

    //Exercise 7: Create a function that prints an alarm message if temperature and/or humidity is too high.
    void Temp_Hum_Alarm(){//Takes in temp/hum and prints alarm message if too high.
    float temp, hum;//Float Declaration.
    cout<< "Please enter a temperature and hit return: "<<endl;//Prints command.
    cin>>temp;//User inputs temp.
    if (temp>=95){//(IF)Condition.
    cout<< "WARNING TOO HOT ALARM!! WARNING TOO HOT ALARM!! WARNING TOO HOT ALARM!! "<<endl;//Prints alarm warning.
    }
    else {//(ELSE)Condition.
    cout<< "Temperture is okay. "<<endl;//Prints message.
    }
    cout<< "Please enter the humidity and hit return: "<<endl;//Prints command.
    cin>>hum;//User inputs hum.
    if (hum>=90){//(IF)Condition.
    cout<< "ALARM! WARNING HUMIDITY TOO HIGH! ALARM!! "<<"\n"<<endl;//Prints alarm warning.
    }
    else {//(ELSE)Condition.
    cout<< "Humidity is okay. "<<"\n"<<endl;//Prints message.
    }

    }

    //Exercise 9: Create a temperature conversion function.
    Temp_Conv(){//Converts Fahrenheit to Celcius and vise versa.
    int conv;//Int Declaration.
    float ans;//Float answer
    cout<<"Please select a temperature converter:"<<endl;//Prints command.
    cout<<"Press 1 and hit enter to convert Fahrenheit to Celcius.\n";//Prints command.
    cout<<"Press 2 and hit enter to convert Celcius to Fahrenheit.\n";//Prints command.
    cin>>conv;//User inputs which temperature converter they want to use.
    if (conv==1){//IF Condition.
    float F;//Float Declaration.
    cout<<"Enter the temperature in degrees Fahrenheit: ";//Prints command.
    cin>>F;//User inputs temperature.
    ans=((F-32)*5/9);//Sum for converting Fahrenheit to Celcius.
    cout<<F<<" degrees Fahrenheit is "<<ans<<" degrees Celcius.\n"<<endl;//Prints answer.
    }
    else if (conv==2){//Else If Condition.
    float C;//Float Declaration.
    cout<<"Enter the temperature in degrees Celcius: ";//Prints command.
    cin>>C;//User inputs temperature.
    ans=((C*9/5)+32);//Sum for converting Celcius to Fahrenheit.
    cout<<C<<" degrees Celcius is "<<ans<<" degrees Fahrenheit.\n"<<endl;//Prints answer.
    }
    else{//Else Condition.
    cout<< "You must select either 1 or 2.\n"<<endl;//Prints out command.
    }

    return 0;
    }

    //Exercise 10: Write a function to find all the even number from 0 to 1000 and print them.
    void Even_Num(){//Finds all even numbers between 0 and 1000.
    int num;//Int Declaration.
    int sta = 0;//Int Value.
    int fin = 1000;//Int Value.
    char t;//Char Declaration.
    cout<<"Tap p and hit return to print out all even numbers from 0 - 1000: "<<endl;//Prints out command.
    cin >> t;//User input.
    if (t=='p'){//If Condition.
    cout<<"Even numbers from 0 to 1000 are: \n"<<endl;//Prints message.
    for(num = sta; num <= fin; num++){//For loop Condition.
    if(num % 2 ==0){//If Condition.
    cout << num <<"\n"<<endl;//Prints out even numbers between 0 - 1000.
    } } }
    else{//Else Condition.
    cout<<"Wrong input. Move on to the next exercise.\n"<<endl;//Prints out message.
    }

    }

    //Exercise 11: Write a function that can take two interger values and find all the odd numbers.
    void Odd_Num(){//Takes two interger values and finds the odd numbers inbetween.
    int num1;//Int Declaration.
    int num2;//Int Declaration.
    cout<<"Please enter an integer value: ";//Prints command.
    cin>> num1;//User input.
    cout<<"Please enter a second integer value: ";//Prints command.
    cin>> num2;//User input.
    for (int num3 = num1 ; num3<=num2 ; num3++)//For loop Condition.
    if(num3%2 ==1 || num3%2==-1)//If Condition.
    cout<<num3<<"\n"<<endl;//Prints out odd numbers between any two intergers.

    }
    //Exercise 12: Overloaded function of Q11/Array of values/Find odd numbers.
    void Overload(){//Overload/Array of values/Finds and prints the odd numbers.
    int x;//Int Declaration.
    char a;//Char Declaration.
    cout<<"Please enter the number of values in the array :";//Prints command.
    cin>>x;//User input.
    cout<<"Would you like to see all the odd numbers in that array? Select y/n and hit return. ";//Prints a question.
    cin>>a;//User input.
    if(a=='y'){//If Condition.
    int arr[x];//Int Declaration of array size.
    for(int i=0; i<x; i++){//For loop Condition.
    if (arr[i]%2!=0){//If Condition.
    cout<<arr[i]<<" is an odd number\n";//Prints out result.
    }}
    }
    else if (a=='n'){//Else If Condition.
    cout<<"You selected n. Move to the next exercise."<<endl;//Prints message.
    }
    else {//Else Condition.
    cout<<"You entered an invaled input. Move on to the next exercise."<<endl;//Prints message.
    }

    }

    //Exercise 13: Create six random numbers.
    void Rand_Num(){//Generates six random numbers.
    char r;//Char Declaration.
    cout<<"Would you like to see the 6 random numbers?\n";//Prints question.
    cout<<"Tap y and hit return for yes or tap n and hit return for no."<<endl;//Prints command.
    cin>>r;//User input.
    if (r =='y'){//If condition.
	int v1=rand()%100+1000;//Value range.
    int v2=rand()%100+1;//Value range.
    int v3=rand()%30+1985;//Value range.
    int v4=rand()%30+2015;//Value range.
    int v5=rand()%30+2045;//Value range.
    int v6=rand()%30+2075;//Value range.
	cout<<"the six random numbers are:"<<endl;//Prints message.
    cout<<v1<<"\n"<<v2<<"\n"<<v3<<"\n"<<v4<<"\n"<<v5<<"\n"<<v6<<endl;//Prints results.
    }
    else if (r =='n'){//Else If Condition.
    cout <<"\nYou selected no. Move on to the next exercise."<<endl;//Prints message.
    }
    else {//Else Condition.
    cout << "\nInvalid input. Move to next exercise."<<endl;//Prints message.
    }

    }

    //Exercise 14: Fix the given code.
    void Fix_Code(){//Prints result.
	int i=5;//Int Declaration.
	while (i < 10)//While Condition.
	{
    cout << "\n"<<i;
    cout << endl;
    i = i + 1;
	}
	/* Finding the sum 1 + 2 + 3 + ... + 20 */
	i = 1;
	int sum = 0;
	while (i <= 20)
	{
    sum = sum + i;
    i = i + 1;
	}
	cout << "The sum of 1 + 2 + 3 + ... + 20 = " <<sum;
	/* Average a list of grades terminated by -1 */
	sum = 0;
	int count = 0;
	int grade;
	cout << "\n\nEnter grade (-1 to end): "; // prompt user for grade
	cin >> grade; // read grade
	while (grade != -1)
	{
    sum = sum + grade;
    count = count + 1;
    /* Get next grade */
    cout << "\n\nEnter grade (-1 to end): ";
    cin >> grade;
	}
	if (count > 0)
    cout << "\nAverage is " << (double) sum / count;

	}

	//Exercise 15: Create a fucntion that will print “finished” 10 times.
	void Finished(){//Prints finished x10(x3 ways.)
    cout<<"\nFor Loop:\n";//Prints header message.
	for (int i = 1; i <=10; i++){//For Condition.
    cout <<"Finished!\n";//Prints message.
	}
	cout<<"\nWhile Loop:\n";//Prints header message.
	int w=1;//Int Declaration.
	while(w<=10){//While Condition.
    cout<<"Finished.\n";//Prints message.
	w=w+1;//Adds 1 after using value.
	}
	cout<<"\nDo While Loop:\n";//Prints header message.
	int d =1;//Int Declaration.
	do { d=d+1;//Adds 1 after using value.
    cout <<"Finished!\n";}//Prints message.
    while (d<=10);//While Condition. While value is less than or equal to 10.

	}
