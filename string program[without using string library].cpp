#include<iostream>
 using namespace std;

class STRING
{
    char arr1[20],arr2[20],result[20];
    int k,n;
public:
    void setstrings()     //setter function//
    {
        cout<<"Welcome to the Program!\n\n";
        cout<<"Enter the first string: ";
        cin>>arr1;
        cout<<"\nEnter the second string: ";
        cin>>arr2;
    }
    void storestrings()  // storing of strings//
    {
        cout<<"\nThe first string you entered is "<<arr1<<endl;
        cout<<"The second string you entered is: "<<arr2<<endl;
    }
    void addstrings()      // adding of strings//
    {
        char a1[20]="Tiruveedhula";
        char a2[10]="Vamsi";


         for(int i=0;i<12;i++)
            a1[i+12]=a2[i];
            a1[20]='\0';

        cout<<"The resultant string is "<<a1<<endl;
    }
    void equatestrings()    // equating of strings//
    {
        int found = 0;
        for(int p=0;p<10;p++)
        {
          if(arr1[p]==arr2[p])
             found+=1;
        }
          if(found!=10)
           cout<<"Both the strings are not equal"<<endl;
          else
            cout<<"The strings are equal"<<endl;

    }
    void displaystrings()
    {
    	cout<<"all types of operaions done !!"<<endl;
    	cout<<"program ended here"<<endl;
	}
};

int main()
{
    STRING s;
    s.setstrings();
    s.storestrings();
    s.addstrings();
    s.equatestrings();
    s.displaystrings();

     return 0;
}
