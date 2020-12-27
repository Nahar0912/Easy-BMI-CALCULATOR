#include<iostream>
#include<string>
using namespace std;
double Bmi_cal(string n,double a,double b){   //Declare and define Bmi calculate function
    double BMI=a/(b*b);   //calculate Bmi
    cout<<endl<<"Hey!!"<<n<<" Your BMI is:"<<BMI<<endl;
    if(BMI<18.5){                           //if, if else statements
        cout<<"Under weight!! Good!, No gain-no pain  XD"<<endl;
    }
    else if(BMI>=18.5 && BMI<=24.9){
        cout<<"Normal weight!! Yes!, Your nation is looking for you  :D"<<endl;
    }
    else if(BMI>=25 && BMI<=29.9){
        cout<<"Over weight!! Oh no!, Start dieting from now  :O"<<endl;
    }
    else if(BMI>=30){
        cout<<"Obesity!! Rest in peace bruh  :)"<<endl;
    }
    return 0; //No value will return
}
int main(){
    int n;   //Declares integer
    double Height[10],weight[10]; //Declares array
    string Name;  //Declare string
    cout<<"                                             ((((*****BMI CALCULATOR*****))))"<<endl<<endl; //it will show on display
    cout<<"How many times do you want to calculate?:";
    cin>>n; //takes input from user
    for(int i=1;i<=n;i++){   //for-loop from 1 to n
    cout<<"Type your fullName here:";
    cin>>Name;
    cout<<"Type your Weight(kg):";
    cin>>weight[i];
    cout<<"Type your Height(meter):";
    cin>>Height[i];
    Bmi_cal(Name,weight[i],Height[i]);//Calls Bmi calculate function
    cout<<endl;
    }
    return 0;
}
